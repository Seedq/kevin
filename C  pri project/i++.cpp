#include <stdio.h>
#include <iostream>
using namespace std;
//要求输入一个整数n，输出整数n以及n+10之间所有的整数。
int main()
{
    int n, i;
    printf("Please inout a int number!\n");
    scanf_s("%d", &n);
    for (i = 1; i < 11; i++)
        printf("%d\n", n + i);





return 0;
}