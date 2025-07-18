// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q2_Student, EmptyInput) {
  CPPLib s;
  std::vector<int> input;
  EXPECT_EQ(s.FindMedian(input), -1);
}

TEST(Q2_Student, SingleInput) {
  CPPLib s;
  std::vector<int> input = {2};
  EXPECT_EQ(s.FindMedian(input), 2);
}

TEST(Q2_Student, EvenNumInputAscending) {
  CPPLib s;
  std::vector<int> input_1 = {2, 5, 7, 39};
  EXPECT_EQ(s.FindMedian(input_1), 6.0);

  std::vector<int> input_2 = {2, 4, 7, 39};
  EXPECT_EQ(s.FindMedian(input_2), 5.5);
}

TEST(Q2_Student, EvenNumInputDescending) {
  CPPLib s;
  std::vector<int> input_1 = {40, 35, 20, 16, 10, 2};
  EXPECT_EQ(s.FindMedian(input_1), 18.0);

  std::vector<int> input_2 = {40, 35, 20, 11, 10, 2};
  EXPECT_EQ(s.FindMedian(input_2), 15.5);
}

TEST(Q2_Student, OddNumInputAscending) {
  CPPLib s;
  std::vector<int> input = {2, 5, 7, 21, 39};
  EXPECT_EQ(s.FindMedian(input), 7.0);
}

TEST(Q2_Student, OddNumInputDescending) {
  CPPLib s;
  std::vector<int> input = {40, 35, 16, 10, 2};
  EXPECT_EQ(s.FindMedian(input), 16.0);
}


TEST(Q2_Student, EvenNumInputUnsorted) {
  CPPLib s;
  std::vector<int> input = {61, 5, 94, 44, 31, 14};
  EXPECT_EQ(s.FindMedian(input), 37.5);
}

TEST(Q2_Student, OddNumInputUnsorted) {
  CPPLib s;
  std::vector<int> input = {1, 65, 84, 32, 3};
  EXPECT_EQ(s.FindMedian(input), 32.0);
}

TEST(Q2_Student, EvenNumInputSame) {
  CPPLib s;
  std::vector<int> input = {5, 5, 5, 5};
  EXPECT_EQ(s.FindMedian(input), 5.0);
}

TEST(Q2_Student, OddNumInputSame) {
  CPPLib s;
  std::vector<int> input = {3, 3, 3, 3, 3};
  EXPECT_EQ(s.FindMedian(input), 3.0);
}