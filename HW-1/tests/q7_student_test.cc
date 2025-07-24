#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(ClimbStairsTest, NegativeInput) {
  CPPLib s;
  EXPECT_EQ(s.climbStairs(-5), -1);
}

TEST(ClimbStairsTest, ZeroSteps) {
  CPPLib s;
  EXPECT_EQ(s.climbStairs(0), 0);
}

TEST(ClimbStairsTest, BaseCases) {
  CPPLib s;
  EXPECT_EQ(s.climbStairs(1), 1);
  EXPECT_EQ(s.climbStairs(2), 2);
}

TEST(ClimbStairsTest, SmallInputs) {
  CPPLib s;
  EXPECT_EQ(s.climbStairs(3), 3); 
  EXPECT_EQ(s.climbStairs(4), 5);
  EXPECT_EQ(s.climbStairs(5), 8);
}

TEST(ClimbStairsTest, OverUpperLimit) {
  CPPLib s;
  EXPECT_EQ(s.climbStairs(46), -1);
}