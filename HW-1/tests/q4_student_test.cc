#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(RandomCaseTest, EmptyInput) {
  CPPLib s;
  std::string input;
  EXPECT_EQ(input, s.RandomCase(input));
}

TEST(RandomCaseTest, PreservesInputLength) {
  CPPLib s;
  std::string input = "This is a test string.";
  std::string output = s.RandomCase(input);
  EXPECT_EQ(input.size(), output.size());
}

TEST(RandomCaseTest, PreservesInputCharacters) {
  CPPLib s;
  std::string input = "This is a test string with numbers 1, 2, 3.";
  std::string output = s.RandomCase(input);
  for (int i = 0, n = input.size(); i < n; i++) {
      EXPECT_EQ(std::tolower(input[i]), std::tolower(output[i]));
  }
}