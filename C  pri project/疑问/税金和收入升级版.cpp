#include <iostream>
#include <stdio.h>
#define sl1money 300.0 * (15.0 / 100.0)
#define sl2money 150 * (20.0 / 100.0)
#define sl1 15.0 / 100.0
#define sl2 20.0 / 100.0
#define sl3 25.0 / 100.0

using namespace std;

int main()
{
    float totalwage, sj, jsl, hours;
    float awage;
    int rate = 0;

    printf("********************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1）$8.74hr                      2) $9.33/hr\n3) $10.00/hr                      \n4) $11.9/hr\n5) quit\n");
    printf("********************************************************************\n");

    while (scanf_s("%d", &rate) && rate != 5) /*如何设置条件，
											当输入为非int数值时
											给出提示并继续输入，
	    										而不是退出循环！！*/
    {
        if (rate < 1 || rate > 5)
        {
            printf("please input a valuable value!\n");
            printf("number:1-5");
            continue;
        }
        else
        {
            switch (rate)
            {
            case 1:
                awage = 8.75;
                break;
            case 2:
                awage = 9.33;
                break;
            case 3:
                awage = 10.00;
                break;
            case 4:
                awage = 11.20;
            }
        }
        printf("How much workhours in a week? \n");
        printf("input the hours or put 'q' to quit.\n");
        scanf_s("%f", &hours);
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
        printf("\n\n\n\n\n");
        printf("********************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1）$8.74hr                      2) $9.33/hr\n3) $10.00/hr                      \n4) $11.9/hr\n5) quit\n");
        printf("********************************************************************\n");
    }
    printf("\nwelcome you next time!Bye!\n");
    return 0;
}