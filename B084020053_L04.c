#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
//toupper(char)
void re(char str[])
{
    int j, k, l;
    int temp;
    l = strlen(str);
    for (k = 0; k < l - 1; k++)
    {
        temp = str[k];
        str[k] = str[l - 1];
        str[l - 1] = temp;
        l--;
    }
    printf("The string after reverse is: %s\n\n", str);
}


int main()
{
    printf("Enter a string:");
    char str[20];
    scanf("%[^\n]", str);
    char str1[20];
    strcpy(str1, str);
    printf("your input is: %s\n\n", str);
    //=====================================================//
    int i;
    for (i = 0; i < 20; i++)
    {
        str[i] = toupper(str[i]); //變大寫
    }
    printf("The string after upper cases is: %s\n", str);
    //====================================================//
    for (i = 0; i < 20; i++)
    {
        str[i] = tolower(str[i]); //變小寫
    }
    printf("When you make your input string inversed: %s\n", str);
    //====================================================//
    re(str1);
    return (0);
}