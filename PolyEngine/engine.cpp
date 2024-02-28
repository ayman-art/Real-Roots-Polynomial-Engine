#include "engine.h"


std::vector<double> PolyEngine::solve(const Polynomial& p) {
    
    if(p.getDegree() == 0) {
        return std::vector<double>();
    }

    else
    if(p.getDegree() == 1) {
        return std::vector<double>(1, -p.getCoefficients()[0] / p.getCoefficients()[1]);
    }

    else {
        std::vector<double> optima = PolyEngine::solve(p.computeDerivate());

        std::vector<double> result;
        for(int i = 0; i < optima.size() - 1; i++) {
            double a = optima[i];
            double b = optima[i + 1];
            
            if(PolyEngine::bisect(p, a, b).has_value()) {
                result.push_back(PolyEngine::bisect(p, a, b).value());
            }
        }

        if(PolyEngine::bisectWithNegInf(p, optima[0]).has_value()) {
            result.insert(result.begin(), PolyEngine::bisectWithNegInf(p, optima[0]).value());
        }

        if(PolyEngine::bisectWithPosInf(p, optima[optima.size() - 1]).has_value()) {
            result.push_back(PolyEngine::bisectWithPosInf(p, optima[optima.size() - 1]).value());
        }

        return result;




    }
}

std::optional<double> PolyEngine::bisect(const Polynomial& p, double a, double b, double epsilon) {
    if(p.substitute(a) * p.substitute(b) > 0) {
        return std::nullopt;
    }

    while(b - a > epsilon) {
        double c = (a + b) / 2;
        if(p.substitute(c) == 0) {
            return c;
        }
        else
        if(p.substitute(c) * p.substitute(a) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }

    return (a + b) / 2;
}

std::optional<double> PolyEngine::bisectWithPosInf(const Polynomial& p, double a, double epsilon) {
    if(p.substitute(a) > 0) {
        return std::nullopt;
    }

    double l = a, r = l;
    while(p.substitute(l) < 0) {
        l = r;
        r *= 2;
    }

    return PolyEngine::bisect(p, l, r, epsilon);


}

std::optional<double> PolyEngine::bisectWithNegInf(const Polynomial& p, double a, double epsilon) {
    if(p.substitute(a) < 0) {
        return std::nullopt;
    }

    double r = a, l = r;
    while(p.substitute(r) > 0) {
        r = l;
        l *= 2;
    }

    return PolyEngine::bisect(p, l, r, epsilon);
}