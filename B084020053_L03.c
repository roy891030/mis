//gcc L03.c -o B084020053.out -Wall
//./B084020053.out
#include <stdio.h>
int f(int); //費氏數列函數

int main()
{
    while (1)
    {
        int i;
        int k;
        printf("Enter an integer to compute the Fabonacii:");
        scanf("%d", &i);
        if (i > 0)
        {
            for (k = 0; k < i; k++)
            {
                printf("F%d=%d\n", k + 1, f(k));
            }
        }
        else
        {
            printf("The input should be greater than 0!\n");
        }
    }
}
int f(int x)
{
    if (x == 0) //29~36行，設定初始數值：當x = 0 or 1 時，return 1
    {
        return 1;
    }
    if (x == 1)
    {
        return 1;
    }

    else //其他x>2時則call function 做recursive
    {
        return f(x - 1) + f(x - 2);
    }
}