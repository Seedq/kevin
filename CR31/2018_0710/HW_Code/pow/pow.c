//дһ������ double power(double x,int n )����ֵΪx��n�η�
#include <stdio.h>
#include <stdlib.h>
double power(double ,int);
int main()
{
    printf("%lf\r\n", power(1.5,3));
system("pause");
    return 0;
}
double power(double dblDnum, int nNUM)
{
    int nCount = 0;
    double dblSum = 1.0;
    for (nCount = 0; nCount < nNUM; nCount++)
    {
       dblSum = dblSum *dblDnum;
    }
    return dblSum;
}