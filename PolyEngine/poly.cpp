#include "poly.h"
#include <iostream>
#include <vector>

Polynomial::Polynomial(const std::vector<double>& coefficients) 
    : coefficients(coefficients) {};

Polynomial::Polynomial(double arr[], int length) 
    : coefficients(arr, arr + length) {};

double Polynomial::substitute(double x) const {
    double currentrFactor = 1;
    double result = 0;
    for (int i = coefficients.size() - 1; i >= 0; i--) {
        result += coefficients[i] * currentrFactor;
        currentrFactor *= x;
    }
    return result;
}

Polynomial Polynomial::computeDerivate() const {
    std::vector<double> newCoefficients(this->coefficients.size() - 1);

    for(int i = 0, currentPower = this->getDegree(); i < newCoefficients.size(); i++) {
        newCoefficients[i] = coefficients[i] * currentPower;
        currentPower--;
    }
    return Polynomial(newCoefficients);
}

std::vector<double> Polynomial::getCoefficients() const {
    return coefficients;
}

int Polynomial::getDegree() const {
    return coefficients.size() - 1;
}