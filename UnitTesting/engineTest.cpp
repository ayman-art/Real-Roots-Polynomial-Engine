#include <gtest/gtest.h>
#include "poly.h"
#include "engine.h"

TEST(PolyEngineTest, SolveTest1) {
    double arr[] = {1, -3, 2};
    Polynomial p(arr, 3);
    std::vector<double> v = {1, 2};
    ASSERT_EQ(PolyEngine::solve(p), v);
}


TEST(PolyEngineTest, SolveTest2) {
    double arr[] = {1, -3, 2, 0};
    Polynomial p(arr, 4);
    std::vector<double> v = {1, 2, 0};
    ASSERT_EQ(PolyEngine::solve(p), v);
}

TEST(PolyEngineTest, BisectTest1) {
    double arr[] = {1, -3, 2};
    Polynomial p(arr, 3);
    ASSERT_EQ(PolyEngine::bisect(p, 1, 2), 1.0);
}

TEST(PolyEngineTest, BisectTest2) {
    double arr[] = {1, -3, 2, 0};
    Polynomial p(arr, 4);
    ASSERT_EQ(PolyEngine::bisect(p, 1, 2), 1.0);
}

TEST(PolyEngineTest, PositiveInfinityTest) {
    double arr[] = {1, -3, 2};
    Polynomial p(arr, 3);
    ASSERT_EQ(PolyEngine::bisectWithPosInf(p, 2), 2.0);
}

TEST(PolyEngineTest, NegativeInfinityTest) {
    double arr[] = {1, -3, 2};
    Polynomial p(arr, 3);
    ASSERT_EQ(PolyEngine::bisectWithNegInf(p, 1), 1.0);
}

