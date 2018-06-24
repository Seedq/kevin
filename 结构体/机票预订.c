#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "extra.h"
#define SEAT 12
#define LEN 15
#define STAR 36														//0 == 空，1 ==占；
typedef struct name
{
	char flame[LEN];
	char lname[LEN];
}nname;
typedef struct seat
{
	int number;
	int flase;
	nname name;
}sseat;
sseat MH404[SEAT];
void start(void);
int* showeseat(sseat se[], int n);
int showsnum(sseat se[], int n);
int assign(sseat *se, int n);
int deleteass(sseat se[], int n);
int main()
{
	int n;
	for (n = 0; n < SEAT; n++)			//初始化座位号和闲置状态；
	{
		MH404[n].flase = 0;
		MH404[n].number = n;
	}
	start();
	return 0;
}
void start(void)
{
	char index;
	while (1)
	{
		
		feedline('n', 2);
		puts("选择相应字母进入菜单");
		starpro('a', 21);
		puts("a) 显示空位置数目\nb) 显示所有空位置\nc) 分配一个座位\nd) 删除一个已分配座位\ne) 退出");
		starpro('a', 21);
		feedline('n', 1);
		printf("你的输入_\b");
		if (scanf_s("%c", &index, 1) == 1&&index !='\n')
		{
			killline();
			switch (index)
			{
			case 'a': printf("\n尊敬的用户现在有%d个空位置\n", showsnum(MH404, 12));
				break;
			case 'b':printf("\n");
				showeseat(MH404, 12);
				break;
			case 'c':printf("\n");
				assign(MH404, 12);
				break;
			case 'd':printf("\n");
				deleteass(MH404, 12);
				break;
			case'e':puts("谢谢使用，再见");
					exit(1);
				break;
			default:printf("输入错误，请重新输入\n");
				break;
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}
int* showeseat(sseat se[],int n)
{
	
	int i;
	int han = 0;
	static int num[12];
	printf("现在的空位置有：\n");
	for (i  = 0; i < n; i++)
	{
		if (se[i].flase == 0)
		{
			num[i] = i + 1;
			han++;
			if ( (han-1)% 4 == 0)
				printf("\n");
			printf(" %d号座位 ", se[i].number + 1);
		}	
	}
	if (han == 0)
	{
		puts("现在没有空座位");
	}
	return num;
}
int showsnum(sseat se[], int n)    
{
	int i;
	int sum =0;
	for (i = 0; i < n; i++)
	{
		if (se[i].flase == 0)
			sum++;
	}
	return sum;

}
int assign(sseat *se, int n)
{
	int *ptr;
	int num;
	int index;
	int a = 0;
	ptr = showeseat(se,n);
	printf("\n");
	puts("请输入你想分配的座位号");
	while (a!=1&& scanf_s("%d", &index) ==1)
	{
		killline();
		for (num = 0; num < 12; num++)
		{
			if (index == ptr[num]&& se[index - 1].flase!=1)
			{
				a = se[index - 1].flase = 1;
				se[index - 1].name.flame;
				puts("请输入你的姓氏：");
				while((num = scanf_s("%s",se[index-1].name.flame,12)) !=1)
				{
					puts("输入有误，请重新输入");
					killline();
				}
				killline();
				if (num == 1)
				{
					puts("请输入你的名字：");
					while (scanf_s("%s", se[index - 1].name.lname,12) != 1)
					{
						puts("输入有误，请重新输入");
						killline();
					}
					killline();
				}
				printf("尊敬的%s%s，您已经成功预定MH404号航班%d号座位!\n", se[index - 1].name.flame, se[index - 1].name.lname,index);
				return a;
			}
		}
		if (a < 0 && a>12)
			puts("请输正确的座位号（1-12）：");
		else if (a != 1)
			printf("%d号座位已经占有，请重新输入正确的空座位号：",index);
	}
}
int deleteass(sseat se[],int n)
{
	int i,z;
	int han = 0;
    int num[12];
	printf("现在占有的座位有：\n");
	for (i = 0; i < n; i++)
	{
		if (se[i].flase == 1)
		{
			num[i] = i + 1;
			han++;
			if ((han - 1) % 4 == 0)
				printf("\n");
			printf(" %d号座位 ", se[i].number + 1);
		}
	}
	if (han == 0)
		puts("现在没有占有的座位");
	puts("输入你希望删除的已预定座位号");
	while (scanf_s("%d", &i) == 1)
	{
		for (z = 0; z<12; z++)
		{
			if (i == num[z])
			{
				se[i - 1].flase = 0;
				printf("你已经成功删除%d号座位\n", i);
				killline();
				return 0;
			}
		}
	}
}