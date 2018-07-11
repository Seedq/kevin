//迷宫游戏
#include <stdio.h>
#include <stdlib.h>
#define LEN 18
void show(char arr[][LEN], int high);
void runmaze(char arr[][LEN], int high, int x, int y);
int main()
{
    char maze[][18] =
    {
        "11111111111111111",
        "10011101100011101",
        "10100000001010001",
        "10001111111010101",
        "111011000110101=1",
        "11101101011010111",
        "10000001011000111",
        "11011111111111111",
    };
    runmaze(maze, 8, 7, 2);
    system("pause");
    return 0;
}
void show(char arr[][LEN],int high)
{
    int nCount = 0;
    for (nCount = 0; nCount < high; nCount++)
    {
        puts(arr[nCount]);
    }
}
void runmaze(char arr[][LEN], int high, int x, int y)
{
    static int nCount = 0;
    system("cls");
    show(arr, high);
    system("pause");
    nCount++;
    if (arr[x][y] == '=')
    {
        printf("共花费了%d步走出迷宫", nCount);
        exit(0);
    }
    arr[x][y] = '*';
    if (arr[x + 1][y] == '0' || arr[x + 1][y] == '=')
    {
        runmaze(arr, high, x+1, y);
    }
    if (arr[x][y+1] == '0' || arr[x][y+1] == '=')
    {
        runmaze(arr, high, x, y+1);
    }
    if (arr[x-1][y] == '0' || arr[x-1][y] == '=')
    {
        runmaze(arr, high, x-1, y);
    }
    if (arr[x+1][y-1] == '0' || arr[x+1][y-1] == '=')
    {
        runmaze(arr, high, x, y-1);
    }
    arr[x][y] = 'B';
    nCount++;
    system("cls");
    show(arr, high);
    system("pause");
}