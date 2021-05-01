#include <stdio.h>

int IsPrime(int);
void listSumOfPrimePairs(int);

int main()
{
    printf("Input the number: ");
    int data = 0;
    scanf("%d", &data);
    if (data < 8 || data % 2 != 0)
    {
        printf("k must be an even number and >=8.\n");
    }
    else
    {
        listSumOfPrimePairs(data);
    }
}

int IsPrime(int data) //判斷是否為prime如果是,return1,不是return0
{
    int i = 0;
    if (data == 2 || data == 1)
    {
        return 1;
    }
    else if (data == 0)
    {
        return 0;
    }
    else
    {
        for (i = 2; i < data; i++)
        {
            if (data % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
void listSumOfPrimePairs(int data) //一個一個查找質數相加等於data的值並印出來
{
    int data1, data2;
    data1 = data - 1;
    data2 = data - data1;
    int i, j;
    for (i = 0; i < data / 2; i++)
    {
        if (IsPrime(data1) && IsPrime(data2))
        {
            printf("%4d = %4d + %-4d\n", data, data1, data2);
        }
        //printf("%d %d %d\n", data, data1, data2);
        data1 -= 1;
        data2 += 1;
    }
}