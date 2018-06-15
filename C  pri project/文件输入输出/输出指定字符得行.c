#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *ph;
    char ch;
    char cha[1000];
    if (argc == 3)
    {
        ch = argv[1][0];
        if (fopen_s(&ph, argv[2], "r") != 0)
        {
            fprintf(stderr, "打开文件失败%s\n", argv[2]);
            exit(EXIT_FAILURE);
        }
        while (fgets(cha, 256, ph) != NULL)
        {
            if (strchr(cha, ch) != NULL)
                fputs(cha, stdout);
        }
        fclose(ph);
    }
    else
        puts("参数输入错误");

    return 0;
} 