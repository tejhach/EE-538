#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Flatten3DVectorTest, NormalInput) {
  CPPLib s;
  std::vector<std::vector<std::vector<int>>> input = {{{1, 2}, {3, 4}}, {{5}, {6, 7}}};
  std::vector<int> output = {1, 2, 3, 4, 5, 6, 7};
  EXPECT_EQ(s.Flatten3DVector(input), output);
}

TEST(Flatten3DVectorTest, EmptyInput) {
  CPPLib s;
  std::vector<std::vector<std::vector<int>>> input = {};
  std::vector<int> output = {};
  EXPECT_EQ(s.Flatten3DVector(input), output);
}

TEST(Flatten3DVectorTest, IrregularInputShape) {
  CPPLib s;
  std::vector<std::vector<std::vector<int>>> input = {{{1}, {}, {2, 3}}, {}, {{4, 5, 6}}};
  std::vector<int> output = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(s.Flatten3DVector(input), output);
}