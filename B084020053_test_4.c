#include <stdio.h>
void reverse(char str[]); //將字串反轉
int stlen(char str[]);    //計算字串長度
int main()
{
    char str[30]; //宣告陣列
    printf("enter a string: ");
    scanf("%30[^\n]s", str);

    printf("string after reverse is:");
    reverse(str);
    printf("\n");

    return 0;
}
void reverse(char str[])
{
    int i, temp;
    int len = stlen(str);
    for (i = 0; i < len / 2; i++) //20~25行將其中元素兩兩反轉
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    for (i = 0; i < len; i++) //26~30行將所元素依依印出
    {
        printf("%c", str[i]);
    }
}

int stlen(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; ++i) //因為string最後結尾是\0，所以就可計算其長度
    {
    }
    return i;
}