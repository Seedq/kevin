/*
用goto 替代 while 和 for 和 do while
*/
#include <stdio.h>
int main()
{
    //EX:do while
    int nNum = 0;
    while (nNum < 10)
    {
        nNum++;
    }
    printf("%d\r\n", nNum);
    //goto do while
     nNum = 0;
    LOOP:
    nNum++;
        if (nNum < 10)
        {
            goto LOOP;
        }
        printf("%d\r\n", nNum);



    //EX:while
     nNum = 0;
    while (nNum < 10)
    {
        nNum++;
    }
    printf("%d\r\n", nNum);
    // goto while;
    nNum = 0;
LOOP2:
    if (nNum < 10)
    {
        nNum++;
        goto LOOP2;
    }
    printf("%d\r\n", nNum);
   
    
    
    //EX for:
    nNum = 0;
    for (nNum = 0; nNum < 10; nNum++);
    printf("%d\r\n", nNum);
    //goto for
    nNum = 0;
    LOOP3:
    nNum++;
    if (nNum < 10)
    {
        goto LOOP3;
    }
    printf("%d\r\n", nNum);

return 0;
}
   