#include <gtest/gtest.h>
#include "poly.h"
#include "engine.h"


TEST(Extensive, n1) {
    std::vector<double> coef = {1, -6, 11, -6};
    Polynomial p(coef);
    std::vector<double> computed = PolyEngine::solve(p);
    std::vector<double> expected = {1, 2, 3};
    ASSERT_EQ(computed, expected);
}

