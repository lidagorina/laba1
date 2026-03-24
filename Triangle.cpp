#include "Triangle.h"
#include <cmath>

double perimetr(double a, double b, double c) {
    return a + b + c;
}

double ploschad(double a, double b, double c) {
    double p = perimetr(a, b, c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool ravnobedr(double a, double b, double c) {
    return (a == b) || (a == c) || (b == c);
}
