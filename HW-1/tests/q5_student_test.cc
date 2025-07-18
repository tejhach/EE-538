#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q5_Student, EmptyInput) {
  CPPLib s;
  std::string firstName;
  std::string lastName;
  std::string exp;
  std::string output = "Hi, my name is  , and my programming experiences are: .";
  EXPECT_EQ(s.PrintIntro(firstName, lastName, exp), output);
}

TEST(Q5_Student, EmptyFirstName) {
  CPPLib s;
  std::string firstName;
  std::string lastName = "Smith";
  std::string exp = "Novice";
  std::string output = "Hi, my name is  Smith, and my programming experiences are: Novice.";
  EXPECT_EQ(s.PrintIntro(firstName, lastName, exp), output);
}

TEST(Q5_Student, EmptyLastName) {
  CPPLib s;
  std::string firstName = "Adam";
  std::string lastName;
  std::string exp = "Novice";
  std::string output = "Hi, my name is Adam , and my programming experiences are: Novice.";
  EXPECT_EQ(s.PrintIntro(firstName, lastName, exp), output);
}

TEST(Q5_Student, EmptyExp) {
  CPPLib s;
  std::string firstName = "Adam";
  std::string lastName = "Smith";
  std::string exp;
  std::string output = "Hi, my name is Adam Smith, and my programming experiences are: .";
  EXPECT_EQ(s.PrintIntro(firstName, lastName, exp), output);
}

TEST(Q5_Student, CompleteInput) {
  CPPLib s;
  std::string firstName = "Adam";
  std::string lastName = "Smith";
  std::string exp = "Novice";
  std::string output = "Hi, my name is Adam Smith, and my programming experiences are: Novice.";
  EXPECT_EQ(s.PrintIntro(firstName, lastName, exp), output);
}

