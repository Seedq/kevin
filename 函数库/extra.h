//自定义函数
#include<stdio.h>

    void killline(void)
{
    char ch;
    while ((ch = getchar()) != '\n')
        continue;
}
void starpro(char r, int n)
{
    int num;
    if (r == 'a')
    {
        for (num = 0; num < n; num++)
        {
            printf("*");
        }
    }
    else
    {
        for (num = 0; num < n; num++)
        {
            printf("_");
        }
    }
}