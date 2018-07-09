/*
猴子吃桃子问题
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int nPeach = 0;
    int nDays = 0;                     //3* （2的（nDays-1）次方） -2
    nPeach = 3 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 - 2;
    printf("猴子摘了%d个桃子\r\n", nPeach);
return 0;
}
   