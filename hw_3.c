#include <stdio.h>

int IsPrime(int);
void listSumOfPrimePairs(int);

int main()
{
    printf("Input the number: ");
    int data = 0;
    scanf("%d", &data);
}

int IsPrime(int data) //判斷是否為prime如果是,return1,不是return0
{
    int i = 0;
    if (data == 2 || data == 1)
    {
        return 1;
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
void listSumOfPrimePairs(int data)
{
}