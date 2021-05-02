#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//gcc B084020053_L01.c -o B084020053_L01.out -Wall
//./B084020053_L01.out
#include <stdlib.h>
int main()
{
    int a, b, r, c, d;
    printf("a:");
    scanf("%d", &a);
    c = a;
    printf("b:");
    scanf("%d", &b);
    d = b;
    while (b != 0) //當其中一個數為0，另一個數就是兩數的最大公約數
    {
        r = a % b;
        a = b;
        b = r;
    }
    printf("gcd(%d,%d)=%d\n", c, d, a);
    system("PAUSE");
}