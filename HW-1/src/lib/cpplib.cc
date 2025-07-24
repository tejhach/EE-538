#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here
  double CPPLib::FindMedian(std::vector<int> input) {
    double res;
    if (input.empty()) {
        res = -1;
        return res;
    }
    else {
        std::sort(input.begin(), input.end());
        int n = input.size();

        if ((n % 2) == 0) {
            res = (input[n / 2] + input[(n / 2) - 1]) / 2.0;
            return res;
        }
        else {
            res = input[n / 2];
            return res;
        }
    }
  }


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
std::string CPPLib::PrintIntro(const std::string &firstName, const std::string &lastName, const std::string &exp) {
    // Please fill up this function.
    return "Hi, my name is \"" + firstName + " " + lastName + ", and my programming experiences are: " + exp + ".\"";
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input){
    // Please fill up this function.
    std::vector<int> res;

    for (const auto &matrix : input) {
        for (const auto &row : matrix) {
            for (const auto &element : row) {
                res.push_back(element);
            }
        }
    }
    return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n){
    // Please fill up this function.
    return 0;
}
