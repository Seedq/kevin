#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int mix, max, index, mi, ma, g;
    int sum = 0;
    printf("请输入一个整数上限和一个整数下限，用空格隔开,输入q退出程序。\n");
    while (scanf_s("%d %d", &mix, &max) == 2)
    {
        mi = mix;
        ma = max;
        for (index = mi; index <= ma; index++)
        {
            g = index * index;
            sum = g + sum;
        }
        printf("从%d到%d每个数平方的和是%d\n", mix, max, sum);
        printf("下一次测试？输入一个整数上限和一个整数下限，用空格隔开，输入q退出程序。\n");
    }

    return 0;
}
