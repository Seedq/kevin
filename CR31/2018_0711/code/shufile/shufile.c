//设计洗牌算法
#include <stdio.h>
#include <stdlib.h>
#define LEN 20
void shufile(int [], int);  //利用rand（）函数随机排序
int main()
{
    int nCount = 0;
    int nCount2 = 0;
    int nNum[LEN] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
    for (nCount = 0; nCount2 < LEN/2 ;nCount2++)
    {
        shufile(nNum, LEN);
        for (nCount = 0; nCount < LEN; nCount++)
        {
            if (nCount == LEN-1)
            {
                printf("%2d ", nNum[nCount]);
            }
            else
            {
                printf("%2d - ", nNum[nCount]);
            }
        }
        printf("\r\n\r\n");
    }
system("pause");
    return 0;
}
void shufile(int arrEx[], int nLen)
{
    int nCount = 0;
    int nRan = 0;
    int nTemp = 0;
    for (nCount = 0; nCount < nLen; nCount++) 
    {
        nRan = rand() % nLen;
        nTemp = arrEx[nCount];
        arrEx[nCount] = arrEx[nRan];
        arrEx[nRan] = nTemp;
    }
}