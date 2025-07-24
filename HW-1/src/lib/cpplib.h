#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  std::string PrintHelloWorld();

  // NOTE: write your own function declaration q2 here
  double FindMedian(std::vector<int> input);

  std::string RandomCase(const std::string &input);

  // Print your self-introduction
  std::string PrintIntro(const std::string &firstName, const std::string &lastName, const std::string &exp);
  
  // q6
  std::vector<int> Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input);

  // Climbing Stairs
  int climbStairs(int n);
  
  private : 
};

#endif
