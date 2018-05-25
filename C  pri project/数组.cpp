#include <iostream>
#include <stdio.h>
using namespace std;

//数组训练
int main()
{
    int i; //check varrible!
    double arr1[8], arr2[8];
    double index = 0;
    printf("请输入8个浮点数");

    for (i = 0; i < 8; i++)
    {
        scanf_s("%lf", &arr1[i], 8);
        index = index + arr1[i];
        arr2[i] = index;
    }
    i = 0;
    printf("结果为\n");
    for (i = 0; i < 8; i++)
    {
        printf("%8.4lf ", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)

        printf("%8.4lf ", arr2[i]);

    printf("\n");

    return 0;
}