//test
//test
#include <iostream>
#include <cassert>
#include "Triangle.h"  
#include "GorinaLida.h"
using namespace std;

int main() {
    
    cout << "Проверим для треугольника" << endl;
    int a, b, c;
    cin >> a >> b >> c;

    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        cout << "ne suschestvuet" << endl;
    }
    else {
        if ((a + b < c) || (b + c < a) || (c + a < b)) {
            cout << "ne suschestvuet" << endl;
        }
        else {
            assert(perimetr(a, b, c) == 12);
            cout << perimetr(a, b, c) << endl;
            assert(ploschad(a, b, c) == 6.0);
            cout << ploschad(a, b, c) << endl;
            assert(ravnobedr(a, b, c) == false);
            cout << ravnobedr(a, b, c) << endl;
        }
	cout << "Проверка завершена" << endl;
    }
    
    return 0;
}
