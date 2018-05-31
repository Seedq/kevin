#include <iostream>
#include <stdio.h>
void alter(void);
int recover(int a, int b);
int main()
{
    int x, y, num;
    x = 1;
    y = 4;
    alter();
    num = recover(x, y);
}

void alter(void)
{

    printf("Please choose one of the following:\n1) copy files 2) move files 3) remove files 4)quit\nEnter the number of your choice:\n");
}
int recover(int a, int b)
{
    int num, min, max;
    min = a < b ? a : b;
    max = a > b ? a : b;

    scanf_s("%d", &num);
    while (num > max || num < min)
    {
        alter();
        scanf_s("%d", &num);
    }
    return num;
}
