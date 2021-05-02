#include <stdio.h>
void printarr(int *);
int IsFull(int *, int);
void seat(int *, int, int);
void sortarr(int *);
int main()
{
    int arr[10] = {99, 0, 10, 31, 0, 42, 70, 67, 0, 0};
    int index = 1;
    int number = 1;
    printarr(arr);

    while (1)
    {
        scanf("%d %d", &index, &number);
        fflush(stdin);
        if (index == 0 && number == 0)
        {
            break;
        }
        else if (IsFull(arr, index) == 1)
        {
            printf("Sorry, seat is taken.\n");
            continue;
        }
        else
        {
            seat(arr, index, number);
            printarr(arr);
        }
    }
    printf("*seating*\n");
    sortarr(arr);
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n*********\n");
}
void printarr(int *arr)
{
    int i;
    printf("*seating*\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n*********\n");
    printf("Please input the seat (1-10) and 2-digit number(0 to end game)\n");
}
void seat(int *arr, int index, int number)
{
    arr[index - 1] = number;
}
int IsFull(int *arr, int index)
{
    if (arr[index - 1] != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void sortarr(int *arr)
{
    int i;
    int j;
    int temp;
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
            int k = j + 1;
            if (arr[j] == 0)
            {
                continue;
            }
            while (arr[k] == 0)
            {
                k++;
            }
            if (arr[j] > arr[k])
            {
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
}