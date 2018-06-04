#include <iostream>
#include <stdio.h>
#define width 5
void showarr(const double *a, int n);
void copyarr2(double *a, double *b, int n);
void copyarr1(double a[], double b[], int n);
int main()
{
    int n, m;
    printf("Program start!\n");
    double twoarr[2][5] = {{2.1, 4.5, 6.5, 4.5, 7.8}, {2.3, 2.3, 5.6, 4.7, 3.5}};
    double index[2][5];                                    
    copyarr1(twoarr[0], index[0], 5);                     /*  注意参数！由于copyarr1函数参量类型为 
                                                          “指向 double类型的指针，而twoarr[o]是tworr[0][0]的地址，
                                                         而twoarr[0][0]是double类型数据，所以此处参数twoarr[0]是正确的 */
    copyarr1(twoarr[1], index[1], 5);
    for (n = 0; n < 2; n++)
    {
        for (m = 0; m < 5; m++)
            printf("%.1lf ", index[n][m]);
    }
    return 0;
}
void copyarr1(double a[], double b[], int n) //函数方法一：copy a -- paste it to b，用数组操作
{
    int i;
    for (i = 0; i < n; i++)
        b[i] = a[i];
}
void copyarr2(double *a, double *b, int n) //函数方法二：copy a -- paste it to b，用指针操作

{
    int i;
    for (i = 0; i < n; i++)
        *(b + i) = *(a + i);
}