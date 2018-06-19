/*
本程序将记录棒球运动员的文件内容输入至结构体中，且计算平均成绩，显示到屏幕。
计划：升级为菜单交互式程序。



*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "extra.h"
#define LEN 20
struct name
{
    char fname[LEN];
    char lname[LEN];
};
struct playerdate
{
    int num[4];
    double average;
};
typedef struct match
{
    int number;
    struct name nam;
    struct playerdate date;

} MATCH;
void showplay(MATCH arr[], int num);
int main(void)
{
    char temp[4][8][LEN];
    int n, b;
    MATCH sum[4];
    FILE *fp;
    if (fopen_s(&fp, "baseball.txt", "r+") != 0)
    {
        fputs("打开文件出错", stderr);
        exit(0);
    }
    for (n = 0; n < 4; n++)
    {
        for (b = 0; b < 7; b++)
        {
            fscanf(fp, "%s", temp[n][b]);
        }
    }

    for (n = 0; n < 4; n++)
    {
        sum[n].number = atoi(temp[n][0]);
        strcpy_s(sum[n].nam.fname, 20, temp[n][1]);
        strcpy_s(sum[n].nam.lname, 20, temp[n][2]);
        for (b = 0; b < 4; b++)
        {
            sum[n].date.num[b] = atoi(temp[n][b + 3]);
        }
    }
    fclose(fp);
    for (n = 0; n < 4; n++)
        sum[n].date.average = (double)sum[n].date.num[1] / (double)sum[n].date.num[0];

    showplay(sum, 4);

    return 0;
}

void showplay(MATCH arr[], int num)
{

    int n, b;
    printf("编号     姓        名      上场数     击中数      走垒数     跑点数    平均分\n");
    for (n = 0; n < num; n++)
    {
        printf("%-6d %-6s     %-6s    %-10d %-10d %-10d %-10d %-9.2lf\n", arr[n].number, arr[n].nam.fname, arr[n].nam.lname, arr[n].date.num[0], arr[n].date.num[1], arr[n].date.num[2], arr[n].date.num[3], arr[n].date.average);
    }
}