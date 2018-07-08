//输出100的阶乘，用数组存放每一位
#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    int m, n;
    int a[200] = {1};
    for (m = 1; m <= N; m++)
    {
        for (n = 0; n < 200; n++)
        {
            a[n] *= m;
        }
        for (n = 0; n < 200 - 1; n++)
        {
            a[n + 1] += a[n] / 10;
            a[n] %= 10;
        }
    }
    for (m = 200 - 1; a[m] == 0; m--)
        ;
    for (; m >= 0; m--)
    {
        printf("%d", a[m]);
    }
    printf("\n");
system("pause");
    return 0;
}