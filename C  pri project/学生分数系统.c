#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#define LEN 20
#define CSIZE 4
#define STAR 36

struct name
{
    char name[20];
    char lname[10];
};
struct student
{
    struct name sname;
    double grade[3];
    double average;
};
void killline(void);
void getgrade(struct student num[], int q);
void showgrade(struct student num[], int q);
void starpro(char r, int n); //if (r == 'a'  echo '*')else(echo '_') n == number;
void start(void);
struct student stugra[CSIZE] =
    {
        {{"danzhoutao", "dan"}},
        {{"ludan", "lu"}},
        {{"wuyou", "wu"}},
        {{"danpeng", "dan"}}};

int main(void)
{

    puts("欢迎使用本程序，本程序可以输入学生成绩并且可以查看");
    while (1)
    {
        start();
    }

    return 0;
}
void killline(void)
{
    char ch;
    while ((ch = getchar()) != '\n')
        continue;
}
void getgrade(struct student num[], int q)
{
    int n;

    while (1)
    {
        int b = 1;
        char tempname[LEN];
        char flase[10];
        printf("输入姓名：\n");
        while (b != 0 && gets_s(tempname, LEN) != NULL && tempname[0] != '\0')
        {

            n = 0;
            while (n < q && (b = strcmp(num[n].sname.name, tempname) != 0))
                n++;
            if (b != 0)
            {
                printf("没有找到姓名为%s的同学", tempname);
                puts("请重新输入姓名");
            }
        }
        puts("输入你的语文成绩 ");
        scanf_s("%lf", &num[n].grade[0]);
        killline();
        puts("输入你的物理成绩 ");
        scanf_s("%lf", &num[n].grade[1]);
        killline();
        puts("输入你的英语成绩 ");
        scanf_s("%lf", &num[n].grade[2]);
        killline();
        puts("是否继续？（输入'y' or 'n'）");
        gets_s(flase, 10);

        if (flase[0] != 'y')
            break;
    }
}
void showgrade(struct student num[], int q)
{
    char type[3][10] = {"语文", "物理", "英语"};

    while (1)
    {
        int b = 1;
        char tempname[LEN];
        int n, c;
        char flase[10];
        puts("输入查询人的姓名");
        while (b != 0 && gets_s(tempname, LEN) != NULL && tempname[0] != '\0')
        {
            n = 0;
            while (n < q && (b = strcmp(num[n].sname.name, tempname) != 0))
                n++;

            if (b != 0)
            {
                printf("没有找到姓名为%s的同学", tempname);
                puts("请重新输入姓名");
            }
        }
        if (b == 0)
        {
            for (c = 0; c < 3; c++)
            {
                printf("%s的%s成绩是：%.1lf\n", num[n].sname.name, type[c], num[n].grade[c]);
            }
            printf("平均分为%.1lf\n", (num[n].grade[0] + num[n].grade[1] + num[n].grade[2]) / 3);
        }
        puts("是否继续？输入'y' or 'n'");
        gets_s(flase, 10);

        if (flase[0] != 'y')
            break;
    }
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
void start(void)
{
    char index;
    puts("输入相应数字选择功能");
    printf("\n\n\n");
    printf("            ");
    starpro('a', STAR);
    printf("\n");
    printf("            ");
    starpro('a', STAR);
    printf("\n");
    printf("            ");
    printf("1.为学生输入成绩     2.查看学生成绩\n");
    printf("\n            3.退出程序\n");
    printf("            ");
    starpro('a', STAR);
    printf("\n");
    printf("            ");
    starpro('a', STAR);
    printf("\n\n输入你的选择_\b");
    scanf_s("%c", &index, 1);
    killline();
    switch (index)
    {
    case '1':
        getgrade(stugra, CSIZE);
        break;
    case '2':
        showgrade(stugra, CSIZE);
        break;

    default:
        exit(1);
        break;
    }
}