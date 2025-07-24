#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here


std::string CPPLib::RandomCase(const std::string &input) {
    std::string res;
    if (input.empty()) {
        return res;
    }
    else {
        std::srand(std::time(nullptr));
        int random_number;

        for (const auto &i : input) {
            random_number = std::rand();
            if ((random_number % 2) == 0){
                res += std::tolower(static_cast<unsigned char>(i));
            }
            else {
                res += std::toupper(static_cast<unsigned char>(i));
            }
        }

        return res;
    }
}

// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro() {
    // Please fill up this function.
    return ""; 
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
