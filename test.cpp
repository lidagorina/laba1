#include <iostream>
#include <cassert>
#include "Triangle.h"  

using namespace std;

int main() {
    
    cout << "Проверим для треугольника 3, 4, 5" << endl;
    assert(perimetr(3, 4, 5) == 12);
    assert(ploschad(3, 4, 5) == 6.0);
    assert(ravnobedr(3, 4, 5) == false);

    cout << "Для треугольника 5, 5, 6" << endl;
    assert(perimetr(5, 5, 6) == 16);
    assert(ploschad(5, 5, 6) == 12.0);
    assert(ravnobedr(5, 5, 6) == true);

    cout << "Все проверки прошли успешно!" << endl;
    return 0;
}
