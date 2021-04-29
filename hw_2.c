//ac
#include <stdio.h>
#include <stdlib.h>
long reverse(int data)
{
    int i;
    int mul = 1;

    i = 0;
    do
    {
        i++;
        mul *= 10;
    } while (mul <= data);
    if (i == 1)
    {
        return data;
    }
    else
    {
        return ((data % 10) * (mul / 10)) + reverse(data / 10);
    }
}
int main()
{
    int num;
    int save;
    printf("Input the number: ");
    scanf("%d", &num);
    save = num;
    //算幾位數
    int n = 0;
    while (num > 0)
    {
        num /= 10;
        n++;
    }
    //共有n位數

    //製造一個數字為10的n+1次方
    int i;
    int ten = 1;
    for (i = 0; i < n; i++)
    {
        ten *= 10;
    }
    ten -= 1;          //製造出9999.....
    save = ten - save; //製造出補數if save=1234 則 回傳 9999-1234=8765
    //得到save，也就是9的補數之後呢，我們用recursive對它反轉
    printf("The reverse number: %ld\n", reverse(save));
}