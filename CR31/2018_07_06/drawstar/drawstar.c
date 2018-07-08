/*输出五角星，
 生成图案底部长度等于边长
 ，所以不算正五角星
 */
#include <stdio.h>
#include <stdlib.h>
#define starnum 12

int main()
{
    int x = 0, y = 0;
    for (y = (starnum * 3) / 2; y >= 0; y--)
    {
        for (x = 0; x <= starnum; x++)
        {
            if (y == 3 * x || y == starnum - 2x || y == x || 
                y == 3 * starnum - 3 * x || y == 2starnum)
                printf("* ");
            else
                printf("  ");
        }
        printf("\r\n");
    }
}
