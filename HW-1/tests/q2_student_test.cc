// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(FindMedianTest, EmptyInput) {
  CPPLib s;
  std::vector<int> v;
  EXPECT_DOUBLE_EQ(s.FindMedian(v), -1.0);
}

TEST(FindMedianTest, OddNumOfElementsShuffle) {
  CPPLib s;
  std::vector<int> v = {5, 1, 2};
  EXPECT_DOUBLE_EQ(s.FindMedian(v), 2.0);
}

TEST(FindMedianTest, OddNumOfElementsAscending) {
  CPPLib s;
  std::vector<int> v = {1, 2, 5};
  EXPECT_DOUBLE_EQ(s.FindMedian(v), 2.0);
}

TEST(FindMedianTest, OddNumOfElementsDescending) {
  CPPLib s;
  std::vector<int> v = {5, 2, 1};
  EXPECT_DOUBLE_EQ(s.FindMedian(v), 2.0);
}

TEST(FindMedianTest, OddNumOfElementsDuplicated) {
  CPPLib s;
  std::vector<int> v = {2, 2, 2};
  EXPECT_DOUBLE_EQ(s.FindMedian(v), 2.0);
}

TEST(FindMedianTest, EvenNumOfElementsShuffled) {
  CPPLib s;
  std::vector<int> v = {6, 2, 1, 3};
  EXPECT_DOUBLE_EQ(s.FindMedian(v), 2.5);
}

TEST(FindMedianTest, EvenNumOfElementsAscending) {
  CPPLib s;
  std::vector<int> v = {1, 2, 3, 6};
  EXPECT_DOUBLE_EQ(s.FindMedian(v), 2.5);
}

TEST(FindMedianTest, EvenNumOfElementsDescending) {
  CPPLib s;
  std::vector<int> v = {6, 3, 2, 1};
  EXPECT_DOUBLE_EQ(s.FindMedian(v), 2.5);
}

TEST(FindMedianTest, EvenNumOfElementsDuplicated) {
  CPPLib s;
  std::vector<int> v = {6, 6, 6, 6};
  EXPECT_DOUBLE_EQ(s.FindMedian(v), 6.0);
}

TEST(FindMedianTest, SingleElement) {
  CPPLib s;
  std::vector<int> v = {36};
  EXPECT_DOUBLE_EQ(s.FindMedian(v), 36.0);
}

