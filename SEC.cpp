#include <iostream>
#include <stdio.h>
#include <float.h>
using namespace std;
int main(void)
{
    const int secfen (60) ;
    int sec, min, secleft;
    printf("This is a sec to min:sec program\n");
    printf("You input a sec-number and the program will reguest you"
           " a min-sec number!\n");
    scanf_s("%d", &sec);
    while (sec > 0)
    {
        min = sec / secfen;
        secleft = sec % secfen;
        printf("%d\n", secleft);
        if (secleft == 0)
        {
            printf("your number is %dmingute\n", min);
            printf("input your next number!\n");
        }
        else
        {
            printf("your number is %dmingute %dsec!\n", min, secleft);
            printf("input your next number!\n");
        }
        scanf_s("%d", &sec);
    }

    printf("done\n");
}
