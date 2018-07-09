//输出图案;菱形
#include <stdio.h>
#include <stdlib.h>
#define SIZE 25
int main()
{
    int nLoopOut, nLoopStar;
    for (nLoopOut = 0; nLoopOut < SIZE; nLoopOut++)
    {
        for (nLoopStar = 0; nLoopStar < SIZE * 2; nLoopStar++)
        {
            printf(" ");
            if (nLoopStar == SIZE - nLoopOut)
                printf("*");
            if (nLoopStar == SIZE + nLoopOut)
                printf("\b*");
        }
        printf("\n");
    }
    for (nLoopOut = 0; nLoopOut <= SIZE; nLoopOut++)
    {
        for (nLoopStar = 0; nLoopStar <= SIZE * 2; nLoopStar++)
        {
            printf(" ");
            if (nLoopStar == nLoopOut)
                printf("*");
            if (nLoopStar == SIZE * 2 - nLoopOut)
                printf("\b*");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}