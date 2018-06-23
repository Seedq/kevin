#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "extra.h"
#define SEAT 12
#define LEN 15
#define STAR 36 //0 == 空，1 ==占；
typedef struct name
{
    char flame[LEN];
    char lname[LEN];
} nname;
typedef struct seat
{
    int number;
    int flase;
    nname name;
} sseat;
sseat MH404[SEAT];
void start(void);
int *showeseat(sseat se[], int n);
int showsnum(sseat se[], int n);
int main()
{

    int n;
    for (n = 0; n < SEAT; n++) //初始化座位号和闲置状态；
    {
        MH404[n].flase = 0;
        MH404[n].number = n;
    }

    start();

    return 0;
}
void start(void)
{
    char index;

    while (1)
    {

        feedline('n', 2);
        puts("选择相应字母进入菜单");
        starpro('a', 21);
        puts("a) 显示空位置数目\nb) 显示所有空位置\nc) 分配一个座位\nd) 删除一个已分配座位\ne) 退出");
        starpro('a', 21);
        feedline('n', 1);
        printf("你的输入_\b");
        if (scanf_s("%c", &index, 1) == 1)
        {
            killline();
            switch (index)
            {
            case 'a':
                printf("\n尊敬的用户现在有%d个空位置\n", showsnum(MH404, 12));
                break;
            case 'b':
                printf("\n");
                showeseat(MH404, 12);
                break;
            case 'c':
                printf("\n");
                assign(MH404, 12);
                break;
            case 'd':
                break;
            case 'e':
                puts("谢谢使用，再见");
                exit(1);
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
            }
        }
    }
}

int *showeseat(sseat se[], int n)
{

    int i;
    int han = 0;
    static int num[12];
    printf("现在的空位置有：\n");
    for (i = 0; i < n; i++)
    {
        if (se[i].flase == 0)
        {
            num[i] = i + 1;
            han++;
            if ((han - 1) % 4 == 0)
                printf("\n");
            printf(" %d号座位 ", se[i].number + 1);
        }
    }
    return num;
}
int showsnum(sseat se[], int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (se[i].flase == 0)
            sum++;
    }
    return sum;
}
int assign(sseat *se, int n)
{
    int *ptr;
    int num;
    int index;
    int a = 0;
    ptr = showeseat(se, n);
    puts("请输入你想分配的座位号");
    while (a != 1 && scanf_s("%d", &index) == 1)
    {

        killline();
        for (num = 0; num < 12; num++)
        {
            if (index == ptr[num] && se[index - 1].flase != 1)
            {
                a = se[index - 1].flase = 1;
                printf("你已经成功预定%d号座位\n", index);
                return a;
            }
        }
        if (a < 0 && a > 12)
            puts("请输正确的座位号（1-12）：");
        else if (a != 1)
            printf("%d号座位已经占有，请重新输入正确的空座位号：", index);
    }
}
