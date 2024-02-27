#include <vector>

class Polynomial {
public:
    Polynomial(const std::vector<double>& coefficients);

    void substitute(double x) const;
    Polynomial computeDerivate() const;

    std::vector<double> getCoefficients() const;

private:
    const std::vector<double> coefficients;

};
