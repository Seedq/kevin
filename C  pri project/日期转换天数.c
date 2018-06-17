#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#define LEN 20
struct MONTH
{
    char name[20];       //月份名称
    char xname[4];       //月份缩写
    int days;            //本月天数
    enum NUMBER numbers; //月份号
    int total;           //一年中到这一月的总天数
};
char *stolower(char *str); //转换字符串为小写；
int fmon(char *mon);       //将月份的输入转化为数值，EX： Feb == 1；
void killline(void);       //清空输入；
int main(void)
{
    enum NUMBER
    {
        January = 1,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    }; //月份号
    struct MONTH mymonth[12] = {
        {"January", "Jan", 31, January, 0},
        {"February", "Feb", 28, February, 31},
        {"March", "Mar", 31, March, 59},
        {"April", "Apr", 30, April, 90},
        {"May", "May", 31, May, 120},
        {"June", "Jun", 30, June, 151},
        {"July", "Jul", 31, July, 181},
        {"August", "Aug", 31, August, 212},
        {"September", "Sep", 30, September, 243},
        {"October", "Oct", 31, October, 273},
        {"November", "Nov", 30, November, 304},
        {"December", "Dec", 31, December, 334}};
    int daytemp;
    char montemp[LEN];
    int yeartemp;
    puts("Hello It is program for show the date number!");
    puts("请输入指定日期的年份：");
    while (scanf_s("%d", &yeartemp) != 1 || yeartemp > 2000 || yeartemp <= 0)
    {
        puts("输入错误，重新输入");
        killline();
    }
    killline();
    puts("请输入指定日期的月份：");
    while (scanf_s("%s", montemp, 20) != 1)
    {
        puts("输入有误，重新输入");
        killline();
    }
    killline();
    puts("请输入指定日期的日号：");
    while (scanf_s("%d", &daytemp) != 1 || daytemp > 31)
    {
        puts("输入有误,请重新输入：");
        killline();
    }
    killline();
    printf("%d.%d.%d\n", yeartemp, fmon(montemp), daytemp);
    printf("%d年%d年%d月%d日总共%d天", yeartemp, yeartemp, fmon(montemp), daytemp, mymonth[fmon(montemp) - 1].total + daytemp);
    return 0;
}
void killline(void)
{
    char ch;
    while ((ch = getchar()) != '\n')
        continue;
}

int fmon(char *mon)
{
    char t[12][20] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};
    char m[] = "123456789";
    int n, b;
    if (strchr(m, mon[0]) != NULL)
    {
        b = atoi(mon);

        return b;
    }
    else
    {
        for (n = 0; n < 12; n++)
        {
            if (strncmp(stolower(t[n]), stolower(mon), 3) == 0)
                return n + 1;
        }
    }
    return 0;
}
char *stolower(char *str) //将字符串全部小写化，并不修改参数值，返回一个新变量。
{
    int num = 0;
    while (str[num] != '\n')
    {
        str[num] = tolower(str[num]);
        num++;
    }
    return str;
}
//I love tuyou.
