//输入10个数,输出最大值和最小值
#include <stdio.h>
#define LEN 10

int main()
{
    int nCount = 0;
    float nMin = 0;
    float nMax = 0;
    float nBox[LEN] = { 0 };
    puts("Enter 10 numbers");
    for (; nCount < 10; nCount++)
    {
        scanf_s("%f", &nBox[nCount]);
    }
    nMax = nMin = nBox[0];
    for (nCount = 0; nCount < 10; nCount++)
    {
        (nMax > nBox[nCount]) ?( nMax = nMax):( nMax = nBox[nCount]);
    }
    printf("The max of number is %f\r\n", nMax);
    for (nCount = 0; nCount < 10; nCount++)
    {
        (nMin < nBox[nCount]) ? (nMin = nMin) : (nMin = nBox[nCount]);
    }
    printf("The min of number is %f\r\n", nMin);
    return 0;
}