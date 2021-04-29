#include <stdio.h>

void print(int x[], int n) //3~10行為print函數，功能為將陣列中的元素全部print出來
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%3d ", x[i]);
    }
}

void swap(int *a, int *b) //12~18行為本次作業大重點：swap函數，使用call by adress方式來將兩數位址存放的數值交換
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int *bubble(int arr[], int n) //20~36行為本次作業第二大重點：透過bubble sort 函數將陣列排好
{
    int i, j, temp;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j <= i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
        print(arr, n); //每執行完成一次成功換位，則將array印出來
        printf("\n");
    }
    return arr;
}

int main()
{
    int n, i;
    int arr[20]; //原本設非常數，但式在linux系統下終端機常顯示：程式記憶體區段錯誤 (核心已傾印)，所以將它寫死qq
    printf("enter the size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) //46~50行：讓使用者input elememt 進 array中
    {
        printf("array[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    //以下為將array元素全部印出來
    print(arr, n);
    printf("\n");
    //以下為對array做bubble sort
    bubble(arr, n);
    return 0;
}