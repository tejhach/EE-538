#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here
float CPPLib::FindMedian(std::vector<int> input) {
    if (input.empty()) {
        return -1;
    }

    std::sort(input.begin(), input.end());

    if ((input.size() % 2) == 0) {
        return (input[input.size() / 2] + input[(input.size() / 2) - 1]) / 2.0;
    }
    else {
        return input[(input.size() - 1) / 2];
    }
}

// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro(const std::string &firstName, const std::string &lastName, const std::string &exp) {
    // Please fill up this function.
    std::string output = "Hi, my name is " + firstName + " " + lastName + ", and my programming experiences are: " + exp + ".";
    return output; 
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input){
    // Please fill up this function.
    std::vector<int> res;
    return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n){
    // Please fill up this function.
    return 0;
}
