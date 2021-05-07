#include <stdio.h>
#include <string.h>
void freqTrans(char *);
void count(char *);
int main()
{
    printf("please enter a string: ");
    char input[40];
    scanf("%s", input);
    //char input[40] = "abbaabab";
    // char input[40] = "accsdfc";

    printf("%s\n", input);
    freqTrans(input);
}

void freqTrans(char *str)
{
    int i = 0;
    int j = 0;
    int count = 0;
    int max = 0;
    char first = ' ';
    char second = ' ';
    for (i = 0; i < strlen(str); i++) //雙層迴圈一一檢查字元
    {
        for (j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j] && str[j + 1] == str[i + 1]) //判斷第i與i+1個字元是否有跟j與j+1字元相同
            {
                count++; //相同則計數
            }
        }

        if (count >= max) //如果計數大於剛剛比較大的計數時則記錄下來
        {
            if (count == max && first < str[i]) //判斷第一個字元與第二個字元的ascii，小的話才可以被印出來
            {
                //啥都不做
            }
            else if (count == max && first == str[i] && second < str[i + 1])
            {
                //也啥都不做
            }
            else
            {
                max = count;
                first = str[i];
                second = str[i + 1];
            }
        }
        count = 0;
    }
    printf("%c -> %c Ferquency: %d", first, second, max);
}
