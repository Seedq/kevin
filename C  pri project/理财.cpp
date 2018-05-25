#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    float da, de;
    da = de = 100.0;
    int year = 0;
    do
    {
        da += 10.0;
        de = de + de * (5.0 / 100.0);
        year++;

    } while (de < da);
    printf("过%d年deredre会超过daphne，金额为%.5f", year, de);

    return 0;
}
