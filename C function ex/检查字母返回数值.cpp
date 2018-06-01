#include <iostream>
#include <stdio.h>
#include <ctype.h> //为检查字符类别的函数系列提供声明。
int wnum(char ch);
int main()
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch) != 0)
            printf("%c is a alpa,and the number is %d.\n", ch, wnum(ch));
        else
            printf("%c is not a alpa.try it again.\n", ch);    
    }
    return 0;
}

int wnum(char ch)
{
    int num;
    if (isalpha(ch) != 0)
    {
        if (islower(ch) != 0)
            num = ch - 96;
        else
            num = ch - 64;
    }
    else
        num = -1;
    return num;
}
