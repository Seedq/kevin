#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define bufsize 1024
#define len 40
void append(FILE *source, FILE *dest);
int main(void)
{
    FILE *fs, *fa;
    char name_app[len]; //目标文件
    char name_src[len]; //源文件
    int files = 1;
    puts("这个程序可以复制文件至你选择的文件\n");
    puts("请输入目标文件名称:\n");
    gets_s(name_app, len - 1);
    if (fopen_s(&fa, name_app, "a") != 0)
    {
        fputs("打开错误，请检查文件名\n", stderr);
        exit(2);
    }
    if (setvbuf(fa, NULL, _IOFBF, bufsize) != 0)
    {
        fprintf(stderr, "创建缓冲区失败\n");
        exit(3);
    }

    printf("请输入第%d个源文件名称\n", files);
    while (gets_s(name_src, len - 1) != NULL && name_src[0] != '\0') //源文件名称
    {
        if (strcmp(name_app, name_src) == 0)
            printf("不能输入同名文件\n");
        else if (fopen_s(&fs, name_src, "r") != 0) //打开源文件
        {
            fprintf(stderr, "打开%s失败,重新输入\n", name_src);
        }
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, bufsize) != 0)
            {
                fprintf(stderr, "创建缓存区失败\n");
                continue;
            }
        }
        append(fs, fa); //添加文字
        if (fclose(fa) != 0)
        {
            printf("关闭%s失败\n", fa);
            exit(3);
        }
        else
        {
            puts("复制成功，请输入下一个文件名（按回车退出）\n");
        }
        files++;
        printf("请输入第%d个目标文件", files);
    }
    puts("谢谢使用");
    fclose(fs);
    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t byte;
    static char temp[bufsize];
    while ((byte = fread(temp, sizeof(char), bufsize, source)) > 0)
    {
        fwrite(temp, sizeof(char), byte, dest);
        printf("byte is %d", byte);
    }
}