//a. Прямоугольник – периметр, площадь, длина диагонали;
//pypypy
#include <iostream>
#include <cmath>
#include "GorinaLida.h"
using namespace std;

//для периметра
double Perimetr(double l, double w){
    if (l>0 && w>0){

       
        return (l+w)*2;
    }
    // l = lenght - длина w = weigth - ширина
    return -1;
}

//для площади
double Area(double l, double w){
    if (l>0 && w>0){

       
        return l*w;
    }
    return -1;
}

//длина диагонали 
double Diagonal (double l, double w){
    if (l>0 && w>0){

        return sqrt(pow(l, 2)+ pow(w, 2));
    }
    return -1;
}

int main(){
    double l, w;

    cout << "Длина: ";
    cin >> l;

    cout << "Ширина: ";
    cin >> w;

    double p = Perimetr(l,w);
    double s = Area(l,w);
    double d = Diagonal(l,w);

    cout << "Периметр - " << p << endl;
    cout << "Площадь - " << s << endl;
    cout << "Диагональ - " << d << endl;

    return 0;
}
