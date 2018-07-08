#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nEx;
    printf("input number 0-5 ");
    scanf("%d", &nEx);
    switch (nEx)
    {
    case 4:
        printf("5");
        break;
    case 1:
        printf("1");
        break;
    case 0:
        printf("0");
        break;
    case 5:
        printf("3");
        break;
    case 2:
        printf("2");
        break;
    default:
        printf("10");
        break;
    }
    system("pause");