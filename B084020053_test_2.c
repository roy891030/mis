#include <stdio.h>
#include <stdlib.h>
int powr(double x, double y)
{
    int j;
    int result = 1;
    for (j = 0; j < y; j++)
    {
        result = result * x;
    }
    return result;
}
int main()
{
    int start, end;
    printf("Input hte start number:");
    scanf("%d", &start);
    printf("Input the end number:");
    i /= 10;
    count++;
    rem = i;
    int j = 0;
    while (i > 1) //21~26計算每個位數數值
    {
        arr[j] = i % 10;
        j++;
        i /= 10;
    }
    // double a;
    // int key;
    -0 // for (a = s ; a < 10; a++) //算出arr陣列有幾個元素非0 可知位數
        // {
        //     if (arr[a] == 0)
        //     {
        //         break;
        //     }
        // }
        int g[10];
    for (k = 0; k < 10; k++) //41~44計算每個位數的次方相加
    {
        g[k] += powr(arr[k], count);
    }
    for (i = 0; i < 10; i++)
    {
        sum += g[k];
    }
    if (sum == rem) //如果符合前面所輸入則印出來
    {
        printf("%f ", sum);
    }
}
