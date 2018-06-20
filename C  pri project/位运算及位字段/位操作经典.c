/* 位操作案例；
将输入整数转化为二进制输出；
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "extra.h" // star and killline
#define LEN 20
char *itobs(int n, char *);
void showbstr(const char *);

int main(void)
{
    char bin_str[8 * sizeof(int) + 1];
    int number;
    puts("Enter integes and see them in binary.");
    puts("Non-numeric input terminates program");
    while (scanf_s("%d", &number) == 1)
    {
        itobs(number, bin_str);
        printf("%d is ", number);
        showbstr(bin_str);
        putchar('\n');
    }
    puts("bye!");
    return 0;
}
char *itobs(int n, char *ps) //	转为二进制
{
    int i;
    static int size = 8 * sizeof(int) + 1;  //	声明1个int数据所用到的位数；
    for (i = size - 1; i > 0; i--, n >>= 1) // ‘n>>=1’means：先将n二进制化，右移1位；
        ps[i] = (01 & n) + '0';             /*	'01'为八进制整数1,此处是为了显示更加机器化，
												    用'1'也可以，'（01&n）'means：n（bin）与掩码1进行位与运算，
													实质是 Ex：00000001（掩码1） & n（bin），'+'0''means 转换为char
											s*/
    ps[size] = '\0';
    return ps;
}
void showbstr(const char *str) //输出
{
    int i = 9;
    while (str[i])
    {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i])
            putchar(' ');
    }
}