/*��������5λ��������Ҫ��
1.��λ��
2.�ֱ��ӡÿһλ����
3.�������ӡ����λ����
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LEN 6
int isnumber(char *arr);    //�����Ƿ�ȫΪ���ֵĺ���
int main()
{
    int nCount = 0;
    int digit = 0;
    char arrNum[LEN] = { 0 };
    printf("�����벻����5λ��������\r\n");
    while (scanf_s("%s", arrNum, LEN) == 0||isnumber(arrNum) != 1 || (int)strlen(arrNum)>5)
    {
        printf("���������������\r\n");
        while (getchar() != '\n')
            continue;
   }
    for (nCount = 0; nCount <= LEN-1; nCount++)
    {
        if (arrNum[nCount] == '\0')
        {
            break;
        }
        digit++;
    }
    printf("����%dλ��\r\n", digit);
    printf("�ֱ��ӡ��ÿһλ����:\r\n");
    for (nCount = 0; nCount < (int)strlen(arrNum); nCount++)
    {
        printf("%c\r\n", arrNum[nCount]);
    }
    printf("�����ӡ��λ����:\r\n");
    for (nCount = (int)strlen(arrNum)-1; nCount >=0; nCount--)
    {
        printf("%c\r\n", arrNum[nCount]);
    }
    return 0;
}
int isnumber(char *arr)
{
    int nStrle = 0;
    int nNum = 0;
    nStrle = (int)strlen(arr);
    for (nNum = 0; nNum < nStrle-1; nNum++)
    {
        if (arr[nNum] < 48 || arr[nNum]>57)
            return 0;
    }
        return 1;
}