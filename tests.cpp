//test
#include <iostream>
#include <cassert>
#include "GorinaLida.h"
using namespace std;

int main(){

    cout << "Проверим для прямоугольника со сторонами 3 и 4"<< endl;
    assert(Perimetr(3, 4) == 14);
    assert(Area(3, 4) == 12);
    assert(Diagonal(3, 4) == 5);

    cout << "Проверка прошла успешно" << endl;


    return 0;
}

