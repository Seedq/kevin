#include <iostream>
#include <stdio.h>
using namespace std;
/*给定无限序列：
1.0 + 1.0/2.0 + 1.0/3.0...
1.0 - 1.0/2.0 + 1.0/3.0...
输入次数，求值。
*/

int main()
{
    int flag, index, i, n;
    float sum1, sum2;
    printf("输入次数。\n");
    while (scanf_s("%d", &index) == 1)
    {
        flag = -1;
        sum1 = sum2 = 0;
        for (i = 1; i <= index; i++)
            sum1 += 1.0 / i;
        for (n = 1; n <= index; n++)
        {
            flag = -flag;
            sum2 = sum2 + (flag * (1.0 / n));
        }
        printf("第一值是:%.4f第二个值是:%.7f\n", sum1, sum2);
        printf("请输入下一次字数，或者按q键退出。\n");
    }

    return 0;
}
