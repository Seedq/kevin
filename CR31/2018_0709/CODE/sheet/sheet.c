//¾Å¾Å³Ë·¨±í
#include <stdio.h>
int main()
{
    int nCount = 0;
    int nCount2 = 0;
    for (nCount = 1; nCount < 10; nCount++)
    {
        for (nCount2 = 1; nCount2 <= nCount; nCount2++)
        {
            printf("%d ",nCount2 * nCount);
        }
        printf("\n");
    }
    return 0;
}