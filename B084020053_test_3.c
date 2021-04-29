#include <stdio.h>
#include <stdlib.h>

int con(int l)
{
    int cou = 0;
    for (int i = 1; i * (i + 1) < 2 * l; i++)
    {
        float x = (1.0 * l - (i * (i + 1)) / 2) / (i + 1); //連加公式
        if (x - (int)x == 0.0)
        {

            printf("%0.f to  \n", x); //x為第一位數
            cou++;
        }
    }
    return cou;
}

int main()
{
    int x;
    printf("Please input a number:");
    scanf("%d", &x);
    printf("Total %d set(s) of %d\n", con(x), x);

    return 0;
}
