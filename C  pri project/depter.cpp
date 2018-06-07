//温度转换程序
#include <iostream>
#include <stdio.h>
using namespace std;

int tempers(double t);
int main()
{
    double t;
    printf(" is a T conversion program!\n ");
    printf("input a Fahrenhelt T.\n");
    scanf_s("%lf", &t);
    tempers(t);

    return 0;
}
int tempers(double t)
{

    double kelvin, celslus;
    celslus = 1.8 * t + 32.00;
    kelvin = celslus + 273.16;
    printf("%.2lf Fis %.2lf C and %.2lf K", t, celslus, kelvin);
    return 0
}