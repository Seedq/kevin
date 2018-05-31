#include <iostream>
#include <stdio.h>
#define sl1 15.0 / 100.0
#define sl2 28.0 / 100.0
#define slmoney1 17850.0 * (15.0 / 100.0)
#define slmoney2 23900.0 * (15.0 / 100.0)
#define slmoney3 29750.0 * (15.0 / 100.0)
#define slmoney4 14875.0 * (15.0 / 100.0)
using namespace std;
int main()
{
    int type, flash, index;
    double money;
    printf("请选择你税收类型！\n");
    printf("1.单身			2.户主\n3.已婚，共有		4.已婚，离异\n");
    printf("输入q退出。\n");
    while ((scanf_s("%d", &type) == 1))
    {

        if (type <= 4 & type > 0)
        {
            printf("请输入你的收入，按q退出\n");
            while (scanf_s("%lf", &money))
            {
                switch (type)
                {
                case 1:
                    if (money <= 17850.0)
                        printf("你的税金是: %.2lf\n", money * sl1);
                    else
                        printf("你的税金是：%.2lf\n", slmoney1 + (money - 17850.0) * sl2);

                    break;
                case 2:
                    if (money <= 23900.0)
                        printf("你的税金是：%.2lf\n", money * sl1);
                    else
                        printf("你的税金是：%.2lf\n", slmoney2 + (money - 23900.0) * sl2);
                    flash = 0;
                    break;
                case 3:
                    if (money <= 29750.0)
                        printf("你的税金是：%.2lf\n", money * sl1);
                    else
                        printf("你的税金是：%.2lf\n", slmoney3 + (money - 29750.0) * sl2);
                    flash = 0;
                    break;
                case 4:
                    if (money <= 14875.0)
                        printf("你的税金是：%.2lf\n", money * sl1);
                    else
                        printf("你的税金是：%.2lf\n", slmoney4 + (money - 14875.0) * sl2);
                    flash = 0;
                    break;
                default:
                    flash = 1;
                    printf("你的输入不正确\n");
                }
                break;
            }
        }
        else
            printf("你的输入不正确，请重新输入。\n");

        printf("请选择你税收类型！\n");
        printf("1.单身			2.户主\n3.已婚，共有		4.已婚，离异\n");
        printf("输入q退出。\n");
    }
    return 0;
}
