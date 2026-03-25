#include <iostream>
#include <cmath>
#include "Triangle.h" 
using namespace std;

double perimetr(double a, double b, double c) {
    return a + b + c;
}

double ploschad(double a, double b, double c) {
    double p = perimetr(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool ravnobedr(double a, double b, double c) {
    return (a == b) || (a == c) || (b == c);
}

/*int main() {
    double a, b, c;
    cout << "Cтороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Периметр: " << perimeter(a, b, c) << endl;
        cout << "Площадь: " << ploschad(a, b, c) << endl;
        if (ravnobedr(a, b, c))
            cout << "Да, равнобедренный" << endl;
        else
            cout << "Нет" << endl;
    } else {
        cout << "Не существует" << endl;
    }
    return 0;
}*/
