#include <iostream>
#include <stdio.h>
int max(const double a[], int b);
int main()
{
    int index;
    double arr[5] = {7.3, 2.4, 5.4, 8.8, 7.3};
    index = max(arr, 5);
    printf("The index is %d\n", index);

    return 0;
}
int max(const double a[], int b)
{
    double max;
    int i, j;
    max = *a;
    j = 0;
    for (i = 0, j = 0; i < b; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            j = i;
        }
    }
    return j;
}
