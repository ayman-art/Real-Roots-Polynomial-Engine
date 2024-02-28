#include <gtest/gtest.h>
#include "poly.h"


TEST(PolynomialTest, ConstructorTest1) {
    std::vector<double> v = {1, 2, 3};
    Polynomial p(v);
    ASSERT_EQ(p.getCoefficients(), v);
}

TEST(PolynomialTest, ConstructorTest2) {
    double arr[] = {1, 2, 3};
    Polynomial p1(arr, 3);
    std::vector<double> v = {1, 2, 3};
    Polynomial p2(v);
    ASSERT_EQ(p1.getCoefficients(), p2.getCoefficients());
}

TEST(PolynomialTest, SubstituteTest) {
    double arr[] = {1, 2, 3};
    Polynomial p(arr, 3);
    ASSERT_EQ(p.substitute(0), 3);
    ASSERT_EQ(p.substitute(1), 6);
    ASSERT_EQ(p.substitute(2), 11);
}

TEST(PolynomialTest, DerivateTest) {
    double arr[] = {1, 2, 3};
    Polynomial p(arr, 3);
    Polynomial p2 = p.computeDerivate();
    std::vector<double> v = {2, 2};
    Polynomial p3(v);
    ASSERT_EQ(p2.getCoefficients(), p3.getCoefficients());
}

TEST(PolynomialTest, DegreeTest) {
    double arr[] = {1, 2, 3};
    Polynomial p(arr, 3);
    ASSERT_EQ(p.getDegree(), 2);
}

