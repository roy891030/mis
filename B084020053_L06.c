#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//gcc B084020053_L06.c -o B084020053_L06.out -Wall
//  ./B084020053_L06.out

//sum mean max min
float sum(int num, float *arr)
{

    int i;
    int sum;
    for (i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float mean(int num, float *arr)
{
    double s = sum(num, arr);
    double mean = s / num;
    return mean;
}

float arrayMax(int num, float *arr)
{
    int i;
    float max = 0;
    for (i = 0; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

float arrayMin(int num, float *arr)
{
    int i;
    float min = 1001;
    for (i = 0; i < num; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main(int argc, char *argv[])
{
    int i;
    float new[10] = {0};
    for (i = 1; i < argc; i++)
    {
        new[i] = atof(argv[i + 1]);
    }
    int num = argc - 1;

    printf("sum = %f\n", sum(num, &new[0]));
    printf("mean = %f\n", mean(num, &new[0]));
    printf("max = %f\n", arrayMax(num, &new[0]));
    printf("min = %f\n", arrayMin(num, &new[0]));
}
/*寫完語法大致沒有偵測到問題，但是小弟使用的式linux ubuntu系統的電腦，
  在輸入./B084020053_L06.out 23 1 4 測資時terminal顯示：程式記憶體區段錯誤 (核心已傾印)
  上網查，有人說可能是陣列過大造成記憶體錯亂而無法運行。但目前還不知道哪裡的陣列過大。

*/