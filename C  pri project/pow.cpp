#include <iostream>
#include <stdio.h>
using namespace std;
double powr(double n, double m)
{
    int i;
    double result = 1;
    for (i = 1; i <= m; i++)
        result *= n;

    return result;
}

int main()
{
    double n;
    double m, res;
    printf("input a n number and a m number.\n");
    while (scanf_s("%lf %lf", &n, &m) == 2)
    {
        res = powr(n, m);
        printf("%.5lf\n", res);
        printf("play it again or press 'q' to exit\n");
    }

    printf("Hope you enjoyed the program trip\n!");

    return 0;
}