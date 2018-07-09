/*给不多于5位正整数，要求：
1.求几位数
2.分别打印每一位数字
3.按逆序打印出各位数字
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LEN 6
int isnumber(char *arr);    //检验是否全为数字的函数
int main()
{
    int nCount = 0;
    int digit = 0;
    char arrNum[LEN] = { 0 };
    printf("请输入不多于5位的正整数\r\n");
    while (scanf_s("%s", arrNum, LEN) == 0||isnumber(arrNum) != 1 || (int)strlen(arrNum)>5)
    {
        printf("输入错误，重新输入\r\n");
        while (getchar() != '\n')
            continue;
   }
    for (nCount = 0; nCount <= LEN-1; nCount++)
    {
        if (arrNum[nCount] == '\0')
        {
            break;
        }
        digit++;
    }
    printf("共有%d位数\r\n", digit);
    printf("分别打印出每一位数字:\r\n");
    for (nCount = 0; nCount < (int)strlen(arrNum); nCount++)
    {
        printf("%c\r\n", arrNum[nCount]);
    }
    printf("逆序打印各位数字:\r\n");
    for (nCount = (int)strlen(arrNum)-1; nCount >=0; nCount--)
    {
        printf("%c\r\n", arrNum[nCount]);
    }
    return 0;
}
int isnumber(char *arr)
{
    int nStrle = 0;
    int nNum = 0;
    nStrle = (int)strlen(arr);
    for (nNum = 0; nNum < nStrle-1; nNum++)
    {
        if (arr[nNum] < 48 || arr[nNum]>57)
            return 0;
    }
        return 1;
}