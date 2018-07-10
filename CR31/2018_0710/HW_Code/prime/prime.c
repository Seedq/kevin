/*
写一个函数验证数字是否为素数。
*/
#include <stdio.h>
#include <stdlib.h>
int nPrime(int x);
int main()
{
    int nNum = 0;
    printf("input a number\r\n");
    while (scanf_s("%d", &nNum) != 1 || nNum <0)
    {
        printf("error\r\n");
        while (getchar() != '\n')
            continue;
   }
    if (nPrime(nNum) == 1)
    {
        printf("%d is a prime\r\n", nNum);
    }
    else
    {
        printf("%d is not a prime\r\n", nNum);
    }
    system("pause");
    return 0;
}
int nPrime(int x)
{
    int n = 0;
    if (x == 0 || x == 1 || x == 2)
    {
        return 0;
    }
    for (n = 2; n <=(x/2); n++)
    {
        if (x%n == 0)
            return 0;
    }
    return 1;
}