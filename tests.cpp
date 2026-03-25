//test
#include <iostream>
#include <cassert>
#include "Triangle.h"  

using namespace std;

int main() {
    
	
		
    cout << "Проверим для треугольника" << endl;
    int a, b, c;
    cin >> a >> b >> c;

    if ((a <= 0) || (b <= 0) || (c <= 0))  {
    	cout << "ne suschestvuet";
    }

    else {

	 if ((a + b <  c) || (b +  c <  a) || (c + a <  b))  {
         cout << "ne suschestvuet";
	 }
   
	 else {
	 assert(perimetr(a, b, c) == 12);
   	 cout << perimetr(a, b, c) << endl;
   	 assert(ploschad(a, b, c)  == 6.0);
   	 cout << ploschad(a, b, c) << endl;
   	 assert(ravnobedr(a, b, c) == false);
   	 cout << ravnobedr(a, b, c) << endl;
	 }
    }


    cout << "Для треугольника 5, 5, 6" << endl;
    assert(perimetr(5, 5, 6) == 16);
    assert(ploschad(5, 5, 6) == 12.0);
    assert(ravnobedr(5, 5, 6) == true);

    cout << "Все проверки прошли успешно!" << endl;
    return 0;
}
