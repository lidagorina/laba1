//a. Прямоугольник – периметр, площадь, длина диагонали;

#include <iostream>
#include <cmath>
using namespace std;

//для периметра
double Perimetr(double l, double w){
    // l = lenght - длина w = weigth - ширина
    return (l+w)*2;
}

//для площади
double Area(double l, double w){
    return l*w;
}

//длина диагонали 
double Diagonal (double l, double w){
    return sqrt(pow(l, 2)+ pow(w, 2));
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


}
