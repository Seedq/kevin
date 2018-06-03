#include <iostream>
#include <stdio.h>
#define width 5
void showarr(const double *a, int n);
void copyarr2(double *a, double *b, int n);
void copyarr1(double a[], double b[], int n);
int main()
{
    printf("Program start!\n");
    double dou[width] = {1.2, 1.2, 1.3, 1.4, 1.5};
    double dou2[5], dou3[5];
    copyarr1(dou, dou2, width);
    copyarr2(dou, dou3, width);
    showarr(dou2, 5);
    printf("\n");
    showarr(dou3, 5);
    printf("\n");
    return 0;
}
void copyarr1(double a[], double b[], int n) //copy a -- paste it to b，用数组操作
{
    int i;
    for (i = 0; i < n; i++)
        b[i] = a[i];
}
void copyarr2(double *a, double *b, int n) //copy a -- paste it to b，用指针操作

{
    int i;
    for (i = 0; i < n; i++)
        *(b + i) = *(a + i);
}
void showarr(const double *a, int n) //输出数组元素;
{
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", a[i]);
}
