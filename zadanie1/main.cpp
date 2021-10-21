#include <iostream>

using namespace std;

double pole(int x, int y)
{
    double p = x*y;
    return p;
}
double pole(double a, double b, double h)
{
    double p = ((a+b)*h)/2;
    return p;
}
int main()
{
    int x, y;
    double a, b, h;
    cout << "dlugosc bokow prostokata:\n";
    cin >> x;
    cin >> y;
    cout << "pole = " << pole(x,y) << endl;
    cout << "dlugosc podstaw trapezu:\n";
    cin >> a;
    cin >> b;
    cout << "wysokosc trapezu:\n";\
    cin >> h;
    cout << "pole trapezu= " << pole(a,b,h) << endl;
    return 0;
}
