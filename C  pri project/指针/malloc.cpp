#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int *makearray(int elem, int val);                         //elem为元素数目,val为每个元素的值，返回所创建数组的地址
void showarray(const int ar[], int n);                     //ar为所显示数组的地址，n为wdith

int main(void)
{
    int *pa;
    pa = makearray(20, 666);
    showarray(pa, 20);
    free(pa);

    return 0;
}

int *makearray(int elem, int val)                              //定义创建数组，malloc分配内存。
{
    int *num;
    int n;
    num = (int *)malloc((int)elem * (sizeof(int)));
    for (n = 0; n < elem; n++)
    {
        num[n] = val;
    }
    return num;
}
void showarray(const int ar[], int n)
{
    int num, j;
    for (num = 0; num < n; num++)
    {
        if (num % 8 == 0 && num != 0)
            printf("\n");
        printf("%d ", ar[num]);
    }
}