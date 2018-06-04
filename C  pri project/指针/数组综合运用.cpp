#include <iostream>
#include <stdio.h>
void showarr(const double *a, int n);                            //输出数组元素;
void inputnum(double *a, double *b, double *c, int i);           //输入数值赋值数组，i:数组宽度
void sum(double *a, double *b, double *c, double d[][5], int n); //一维数组赋值给二维数组，n:数组宽度
double pj(const double *a, int m);                               //算一维数组平均数，m:数组元素
double zpj(const double a[][5], int n);                          //算二维数组平均数，n:行数
double max(double a[][5], int n);                                //算二维数组最大值，n:行数
int main()
{
    double arr1[5], arr2[5], arr3[5];
    double arr4[3][5];
    double pj1, pj2, pj3, pj4; //pj4:二维数组平均数
    double maxn;
    printf("Program start!\n");
    inputnum(arr1, arr2, arr3, 5);
    sum(arr1, arr2, arr3, arr4, 5); //为二维数组arr4赋值
    pj1 = pj(arr1, 5);
    pj2 = pj(arr2, 5);
    pj3 = pj(arr3, 5);
    pj4 = zpj(arr4, 3);
    maxn = max(arr4, 3);
    printf("你输入的3个数集各自的平均数分别是%.2lf,%.2lf,%.2lf\n"
           "总平均数是%.2lf\n15个数里最大的数是%.2lf\n",
           pj1, pj2, pj3, pj4, maxn);
    printf("谢谢使用\n");
    return 0;
}

void inputnum(double *a, double *b, double *c, int i)
{
    int index, n, re;
    index = 1;
    re = 1;
    n = 0;
    printf("输入3组数集，每一组为5个浮点数,用空格隔开。按q退出程序。\n");
    while (index == 1)
    {
        if (re == 0)
            printf("输入有误，请重新输入!\n输入3组数集，每一组为5个浮点数,用空格隔开。");

        printf("请输入第一组数集：\n");
        while (scanf_s("%lf", &a[n]) == 1 && n++ < i - 1)
            continue;
        n = 0;
        printf("请输入第二组数集：\n");
        while (scanf_s("%lf", &b[n]) == 1 && n++ < i - 1)
            continue;
        n = 0;
        printf("请输入第三组数集：\n");
        n = 0;
        while (scanf_s("%lf", &c[n]) == 1 && n++ < i - 1)
            continue;
        index = 0;
    }
}

void sum(double *a, double *b, double *c, double d[][5], int n)
{
    int e;
    for (e = 0; e < n; e++)
    {
        d[0][e] = a[e];
        d[1][e] = b[e];
        d[2][e] = c[e];
    }
}

double pj(const double *a, int m)
{
    double pj, sum;
    int n;
    sum = 0;
    for (n = 0; n < m; n++)
        sum += a[n];
    pj = sum / m;
    return pj;
}

double zpj(const double a[][5], int n)
{
    double sum, zpj, q;
    q = n;
    int z, b;
    sum = 0;
    for (z = 0; z < n; z++)
        for (b = 0; b < 5; b++)
            sum += a[z][b];
    zpj = sum / (5 * q);
    return zpj;
}

void showarr(const double *a, int n) //输出数组元素;
{
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", a[i]);
}

double max(double a[][5], int n)
{
    double max;
    int z, b;
    max = a[0][0];
    for (z = 0; z < n; z++)
        for (b = 0; b < 5; b++)
            a[z][b] > max ? max = a[z][b] : max = max;
    return max;
}
