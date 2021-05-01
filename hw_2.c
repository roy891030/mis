//ac
#include <stdio.h>
#include <stdlib.h>

void reverseNum(int);

int main()
{
    int data;
    printf("Input the number: ");
    scanf("%d", &data);
    printf("The reverse number: ");
    reverseNum(data);
}
void reverseNum(int data)
{
    if (data < 10)
    {
        printf("%d", 9 - data);
    }
    else
    {
        printf("%d", 9 - data % 10);
        reverseNum(data / 10);
    }
}