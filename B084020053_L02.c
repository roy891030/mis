#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("please enter a number:");
    scanf("%d", &num);
    int i;
    int f1, f2;
    int f;
    int temp1;
    int temp2;
    for (i = 1; i <= num; i++) //此for loop先將費氏數列的前兩項使用if/esle if定義清楚
    {
        if (i == 1)
        {
            printf("F1 = 1\n");
            f1 = 1;
        }
        else if (i == 2)
        {
            printf("F2 = 1\n");
            f2 = 1;
        }
        else if (i > 2) //在此else if 判斷式後將原本前兩項f1、f2相加後進行"右移"
        {
            f = f2 + f1;
            printf("F%d = %d\n", i, f);
            temp1 = f2; //31~33行進行右移，使接下來可以進行費氏數列的相加以取代遞迴關係式
            f2 = f;
            f1 = temp1;
        }
    }
}