#include <stdio.h>
#include <string.h>
void StrCut(char *);
void count(char *);
int main()
{
    printf("please enter a string: ");
    char input[40];
    scanf("%s", input);
    //char input[40] = "abbaabab";
    // char input[40] = "accsdfc";

    printf("%s\n", input);
    StrCut(input);
}

void StrCut(char *str) //將input 字串分割成兩兩成對並用空字元隔開
{
    int i = 0;
    int j = 0;
    int count = 0;
    int max = 0;
    char first = ' ';
    char second = ' ';
    for (i = 0; i < strlen(str); i++)
    {
        for (j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j] && str[j + 1] == str[i + 1])
            {
                count++;
            }
        }

        if (count >= max)
        {
            if (count == max && first < str[i])
            {
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
