#include <stdio.h>

int wordCount(char *);
int max(int *);
int main()
{
    printf("enter a string:");
    char arr[10];
    char arr1[20] = " ";
    // gets(arr);
    printf("\n\n%d\n\n", wordCount(arr1));
}
int max(int *arr)
{
    int i;
    int p = 422;
    int max = 0;
    printf("%ld\n", sizeof(arr));
    printf("%ld", sizeof(arr[1]));
    for (i = 0; i < (int)sizeof(arr) / (int)sizeof(arr[1]); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            p = i;
        }
    }
    return p;
}
int wordCount(char *sentence)
{
    int count = 0;
    int x;
    int space = 1;
    int num[10] = {0};
    int cal = 0;

    for (x = 0; sentence[x] != '\0'; x++) //逐一檢查每一字元
    {
        if (sentence[x] <= 122 && sentence[x] >= 65 || sentence[x] == ' ') // 限制sentence[]只能在A-z之間
        {
            cal++;
            if (' ' == sentence[x])
            {
                cal--;
                space = 1; //如果是' '則設立狀態為1
                num[count - 1] = cal;
                cal = 0;
            }
            else if (space == 1) //直到不是' ' 後，則將狀態改為0並計數
            {
                space = 0;
                count++;
                cal = 1;
            }
        }
        else
            continue;
    }
    return max(num);
}
