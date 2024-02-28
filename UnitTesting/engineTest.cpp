#include <gtest/gtest.h>
#include "poly.h"
#include "engine.h"
#include <cmath>

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
    auto sol = PolyEngine::solve(p);

    sort(sol.begin(), sol.end());
    sort(v.begin(), v.end());
    ASSERT_EQ(sol, v);
}

TEST(PolyEngineTest, BisectTest1) {
    double arr[] = {1, -3, 2};
    Polynomial p(arr, 3);
    ASSERT_EQ(PolyEngine::bisect(p, 1.5, 2.5), 2.0);
}

TEST(PolyEngineTest, BisectTest2) {
    double arr[] = {1, -3, 2, 0};
    Polynomial p(arr, 4);
    ASSERT_TRUE(abs(PolyEngine::bisect(p, 0.2, 1.5).value() - 1.0) < 1e-6);
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

