#pragma once

#include "poly.h"

#include <vector>
#include <optional>

class PolyEngine {
public:
    static std::vector<double> solve(const Polynomial& p);
    static std::optional<double> bisect(const Polynomial& p, double a, double b, double epsilon = 1e-6);
    static std::optional<double> bisectWithPosInf(const Polynomial& p, double a, double epsilon = 1e-6);
    static std::optional<double> bisectWithNegInf(const Polynomial& p, double a, double epsilon = 1e-6);


};

