#include <iostream>
#include <stdio.h>
#define sl1money 300.0 * (15.0 / 100.0)  //1阶税率金额
#define sl2money 150 * (20.0 / 100.0)    //2阶税率金额
#define sl1 15.0 / 100.0                 //1阶税率
#define sl2 20.0 / 100.0                 //2阶税率
#define sl3 25.0 / 100.0                 //3阶税率
#define awage 10.0                       //基础工作时薪

using namespace std;
/* 本程序要求输入每周工作时间，求总收入，税金，净收入。*/


int main()
{
    float hours, totalwage, sj, jsl;

    printf("How much workhours in a week? \n");
    printf("input the hours or put 'q' to quit.\n");
    while (scanf_s("%f", &hours))
    {
        if (hours <= 40.0)
            totalwage = hours * awage;
        else
            totalwage = (hours - 40.0) * awage * 1.5 + awage * 40.0;

        if (totalwage > 300.0 && totalwage <= 450.0)
        {
            sj = sl1money + (totalwage - 300.0) * sl2;
            jsl = totalwage - sj;
            printf("你的工资总额是%.2f，你的税金是%.2f，你的净收入是%.2f。\n", totalwage, sj, jsl);
        }
        else if (totalwage > 450.0)
        {
            sj = sl1money + sl2money + (totalwage - 450) * sl3;
            jsl = totalwage - sj;
            printf("你的工资总额是%.2f，你的税金是%.2f，你的净收入是%.2f。\n", totalwage, sj, jsl);
        }
        else
        {
            sj = sl1 * totalwage;
            jsl = totalwage - sj;
            printf("你的工资总额是%.2f，你的税金是%.2f，你的净收入是%.2f。\n", totalwage, sj, jsl);
        }
        printf("请输入下一个时间值或者输入q退出");
    }

    return 0;
    
}