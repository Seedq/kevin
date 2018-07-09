//输入年月日后求出天数差值，然后判断状态。
#include <stdio.h>
int main()
{
    int nYears1 = 0;
    int nYears2 = 0;
    int nMonths1 = 0;
    int nMonths2 = 0; 
    int nDays1 = 0;           
    int nDays2 = 0;            
    int nSumdays = 0;                 //相差总天数
    int nMonthdays1 = 0;              //出生年的当年月份的总天数
    int nMonthdays2 = 0;              //计算年的当年月份的总天数
    int nCount = 0;                   //计数器
    int nStatusPq = 0;                //体商状态
    int nStatusIq = 0;                //智商状态
    int nStatusEq = 0;                //情商状态
    int arrMonthdays1[12] =
    {
        0,31,59,90,120,151,181,212,243,273,304,334                          //平年月数的总天数
    };
    int arrMonthdays2[12] =
    {
        0,31,60,91,121,152,182,213,244,274,305,335                          //闰年月数的总天数
    };
    printf("Enter your birthdate\r\nEx:1999 09 21\r\n");
    scanf_s("%d%d%d", &nYears1, &nMonths1, &nDays1);
    fflush(stdin);
    printf("Enter your figourdate.\r\n");
    scanf_s("%d%d%d", &nYears2, &nMonths2, &nDays2);
    fflush(stdin);
    for (nCount = nYears1; nCount <= nYears2 - 1; nCount++)
    {
        if (nCount % 4 == 0 && (nCount % 100 != 0 || nCount % 400 == 0))     //闰年
        {
            nSumdays = nSumdays + 366;
        }
        else
        {
            nSumdays = nSumdays + 365;                                        //平年
        }
    }
    if (nYears1 % 4 == 0 && (nYears1 % 100 != 0 || nYears1 % 400 == 0))
    {
        nMonthdays1 = arrMonthdays2[nMonths1 - 1];
    }
    else
    {
        nMonthdays1 = arrMonthdays1[nMonths1 - 1];
    }
    if (nYears2 % 4 == 0 && (nYears2 % 100 != 0 || nYears2 % 400 == 0))
    {
        nMonthdays2 = arrMonthdays2[nMonths2 - 1];
    }
    else
    {
        nMonthdays2 = arrMonthdays1[nMonths2 - 1];
    }
    nSumdays = nSumdays - nMonthdays1 + nMonthdays2 - nDays1 + nDays2;
    printf("The total days is %d\r\n", nSumdays);
    nStatusPq = nSumdays % 23;
    nStatusEq = nSumdays % 28;
    nStatusIq = nSumdays % 33;
    if (nStatusPq > 0 && nStatusPq < 11)
        printf("当前日期为体力高潮期、");
    else
    {
        printf("当前日期为体力低潮期、");
    }
    if (nStatusEq > 0 && nStatusEq < 14)
        printf("情绪高潮期、");
    else
    {
        printf("情绪低潮期、");
    }
    if (nStatusIq > 0 && nStatusIq < 11)
        printf("智力高潮期\r\n");
    else
    {
        printf("智力低潮期\r\n");
    }
    return 0;
}