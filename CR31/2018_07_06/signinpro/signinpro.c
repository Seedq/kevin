/*模拟登陆，
最多输错3次。
注意：用到非ANSI C 标准库函数scanf_s*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 16
#define TIMES 3
int Acccheck(char *actemp);
int Passcheck(char *patemp);
int main()
{
    int n = 0;
    int nCount = 0;
    char chTempacc[LEN];
    char chTempkey[LEN];
    printf("Input your account number and your passworld"
           ".do not nore than %d times\r\n",
           TIMES);
    while (nCount < 3)
    {
        printf("Please input your account number:\r\n_______\b\b\b\b\b\b\b");
        scanf_s("%s", chTempacc, LEN);
        while (getchar() != '\n')
            continue;
        printf("Please input your password:\r\n_______\b\b\b\b\b\b\b");
        scanf_s("%s", chTempkey, LEN);
        while (getchar() != '\n')
            continue;
        if (Acccheck(chTempacc) != 1 && Passcheck(chTempkey) != 1)
        {
            nCount++;
            if (nCount != TIMES)
                printf("%c%c%c%c%c%c%c", 49 % 5 + 83, 48 % 5 + 111, 48 % 5 + 108, 56 % 5 + 109, 54 % 5 + 99, 49 % 5 + 29, 45 % 5 + 10);
            else
                printf("%c%c%c%c%c %d %c%c%c%c%c%c%c%c%c%c", 69, 114, 114, 111, 114, TIMES, 116, 105, 109, 101, 115, 10, 66, 121, 101, 10);
        }
        else
        {
            printf("%c%c%c%c%c%c%c%c%c%c%c",
                   chTempacc[0] % 5 + 81, chTempacc[1] % 5 + 116,
                   chTempacc[2] % 5 + 96, chTempacc[3] % 5 + 96,
                   chTempacc[4] % 5 + 100, chTempacc[5] % 5 + 113,
                   chTempacc[6] % 5 + 114, chTempacc[7] % 5 + 98,
                   chTempacc[8] % 5 + 114, chTempacc[9] % 5 + 108,
                   chTempacc[9] % 5 + 10);
            break;
        }
    }
    system("pause");
    return 0;
}
int Acccheck(char *actemp)
{
    int n = 0;
    int acclen = strlen(actemp);
    if (actemp[0] == acclen + 62)
    {
        if (actemp[1] == actemp[0] + 29)
        {
            if (actemp[2] == actemp[1] + 7)
            {
                if (actemp[3] == actemp[2])
                {
                    if (actemp[4] == actemp[3] + 3)
                    {
                        if (actemp[5] == actemp[4] - 24)
                        {
                            if (actemp[6] == actemp[5] + 24)
                            {
                                if (actemp[7] == actemp[6] + 3)
                                {
                                    if (actemp[8] == actemp[7] - 6)
                                    {
                                        if (actemp[9] == actemp[8] - 8)
                                        {
                                            if (actemp[10] == '\0')
                                                return 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
int Passcheck(char *patemp)
{
    int n = 0;
    int palen = strlen(patemp);
    if (patemp[0] == palen + 41)
    {
        if (patemp[1] == patemp[0] + 7)
        {
            if (patemp[2] == patemp[1])
            {
                if (patemp[3] == patemp[2] + 8)
                {
                    if (patemp[4] == patemp[3] - 4)
                    {
                        if (patemp[5] == patemp[4] - 3)
                        {
                            if (patemp[6] == patemp[5])
                            {
                                if (patemp[7] == '\0')
                                    return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
//Account：HelloWorld
//Key：1008611