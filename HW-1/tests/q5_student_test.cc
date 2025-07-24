#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(PrintIntroTest, BasicTest) {
  CPPLib s;
  std::string firstName = "John";
  std::string lastName = "Adams";
  std::string exp = "Football and Hockey";
  std::string output = s.PrintIntro(firstName, lastName, exp);
  EXPECT_EQ(output, "Hi, my name is \"John Adams, and my programming experiences are: Football and Hockey.\"");
}

TEST(PrintIntroTest, EmptyFirstName) {
  CPPLib s;
  std::string firstName = "";
  std::string lastName = "Adams";
  std::string exp = "Football and Hockey";
  std::string output = s.PrintIntro(firstName, lastName, exp);
  EXPECT_EQ(output, "Hi, my name is \" Adams, and my programming experiences are: Football and Hockey.\"");
}

TEST(PrintIntroTest, EmptyLastName) {
  CPPLib s;
  std::string firstName = "John";
  std::string lastName = "";
  std::string exp = "Football and Hockey";
  std::string output = s.PrintIntro(firstName, lastName, exp);
  EXPECT_EQ(output, "Hi, my name is \"John , and my programming experiences are: Football and Hockey.\"");
}

TEST(PrintIntroTest, EmptyExperience) {
  CPPLib s;
  std::string firstName = "John";
  std::string lastName = "Adams";
  std::string exp = "";
  std::string output = s.PrintIntro(firstName, lastName, exp);
  EXPECT_EQ(output, "Hi, my name is \"John Adams, and my programming experiences are: .\"");
}

TEST(PrintIntroTest, SpecialCharacters) {
  CPPLib s;
  std::string firstName = "John";
  std::string lastName = "Adams";
  std::string exp = "C++";
  std::string output = s.PrintIntro(firstName, lastName, exp);
  EXPECT_EQ(output, "Hi, my name is \"John Adams, and my programming experiences are: C++.\"");
}

TEST(PrintIntroTest, LongStrings) {
  CPPLib s;
  std::string firstName = "John";
  std::string lastName = "Adams";
  std::string exp = "C, C++, Python, Rust, Java, JavaScript, MATLAB, SPPA-T3000, Octave, Bash, jasdfjasdfjasdf asdfhjasdfsadfsdfasdf";
  std::string output = s.PrintIntro(firstName, lastName, exp);
  EXPECT_EQ(output, "Hi, my name is \"John Adams, and my programming experiences are: C, C++, Python, Rust, Java, JavaScript, MATLAB, SPPA-T3000, Octave, Bash, jasdfjasdfjasdf asdfhjasdfsadfsdfasdf.\"");
}