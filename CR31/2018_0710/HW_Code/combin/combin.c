/*��1��10��10������ȡ��3����ͬ���������ж�����Ϸ�ʽ��
�㷨��ʹ����ѧ�е���Ϲ�ʽ������m =10,n =3
num = (m-1)*(m-2)*...(m-n+1)/!n  */
#include <stdio.h>
#include <stdlib.h>
int combin(int dad, int son);
int main()
{
    int m = 10;
    int n = 3;
    int nCount = 0;
    printf("����%d�����",combin(10,3));
}
int combin(int dad,int son )
{
    int nSpolt, nDemo, nCount;
    for (nDemo = nCount = 1; nCount<=son; nCount++)
    {
        nDemo = nDemo * nCount;
    }
    for (nSpolt=1,nCount = dad; nCount >= dad -son + 1; nCount--)
    {
        nSpolt = nSpolt * nCount;

    }
    return nSpolt / nDemo;
}
