#include <stdio.h>
#include <string.h>
void StrCut(char *);
void count(char *);
int main()
{

    // scanf("%s", input);
    char input[40] = "abababbbabbba";
    printf("%s\n", input);
    StrCut(input);
    printf("%s\n", input);
}

void StrCut(char *str) //將input 字串分割成兩兩成對並用空字元隔開
{
    int i = 0, count = 0;
    char new[100];
    for (i = 0; i < strlen(str); i++)
    {
        new[count] = str[i];
        new[count + 1] = str[i + 1];
        new[count + 2] = '|';
        count += 3;
    }
    for (i = 0; i < strlen(new); i++)
    {
        str[i] = new[i];
    }
}
void count(char *str)
{
    int i, j;
    for (i = 0; i < strlen(str); i++)
    {
        
    }
}