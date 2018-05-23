#include <iostream>
#include <stdio.h>
using namespace std;
/*ANSCII 'A' = 60;
a = 行数 b = 空格 c=升序 d=降序;*/
int main()
{                                                                         
    int a, b, c, d;                                                
    char yeng;          //定义用户输入的大写字母；

    printf("请输入一个大写字母!\n");

    scanf_s("%c", &yeng);
    
    printf("你得到的图形为：\n");
    
    for (a = 0; a <= yeng - 65; a++)
    {
        for (b = 0; b < yeng - 64 - a; b++)
        {
            printf(" ");
        }
        for (c = 0; c <= a; c++)
        {
            printf("%c", 65 + c);
        }
        for (d = 1; d <= a; d++)
        {
            printf("%c", a - d + 65);
        }
        printf("\n");
    }
    return 0;
}