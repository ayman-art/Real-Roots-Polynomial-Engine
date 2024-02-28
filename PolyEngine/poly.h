#include <vector>

class Polynomial {
public:
    Polynomial(const std::vector<double>& coefficients);
    Polynomial(double arr[], int length);

    double substitute(double x) const;
    Polynomial computeDerivate() const;

    std::vector<double> getCoefficients() const;
    int getDegree() const;

private:
    const std::vector<double> coefficients;

};
