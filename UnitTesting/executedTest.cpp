#include "engine.h"
#include <iostream>

int main(int argc, char **argv) {
    auto res = PolyEngine::solve(Polynomial({1, -6, 11, -6}));
    for(auto x : res) {
        std::cout << x << " ";
    } 
    std::cout << std::endl;

    auto res2 = PolyEngine::solve(Polynomial({1, -3, 2, 0}));
    for(auto x : res2) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    Polynomial res3 = PolyEngine::solve(Polynomial({1, 3, -4, -2, -12, 23}));
    for(auto x : res3.getCoefficients()) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    Polynomial res4 = PolyEngine::solve(Polynomial({1,4,35}));
    for(auto x : res4.getCoefficients()) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}