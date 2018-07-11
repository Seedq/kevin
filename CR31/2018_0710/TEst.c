#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    n = n + 1;
    system("pause");
    return n;
}
int main()
{
    int a = 3;
    system("pause");
    foo(a);
    return 0;
}