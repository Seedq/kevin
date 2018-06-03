#include <iostream>
#include <stdio.h>
int max(const int *a, int b);
int main()
{
    int arr[5] = {1, 2, 7, 4, 5};
    int num;
    num = max(arr, 5);
    printf("The max number of the array is %d\n", num);
    return 0;
}
int max(const int *a, int n)
{
    int i, max;
    max = *a;
    for (i = 0; i < n; i++)
        max < *(a + i) ? max = *(a + i) : max = max;
    return max;
}