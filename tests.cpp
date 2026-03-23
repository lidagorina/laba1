//test
#include <iostream>
#include <cassert>
#include "GorinaLida.h"
using namespace std;

int main(){
    int l = 3;
    int w = 4;

    cout << "Проверим для прямоугольника со сторонами 3 и 4"<< endl;
    assert(Perimetr(l, w) == 14);
    assert(Area(l, w) == 12);
    assert(Diagonal(l, w) == 5);

    cout << "Проверка прошла успешно" << endl;


    return 0;
}

