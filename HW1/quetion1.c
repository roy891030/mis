#include <stdio.h>
#include <string.h>
int longestWord(char *sentence);
int main()
{
    char str[100] = {};
    printf("Input: ");
    fgets(str, 100, stdin);
    printf("\nPosition of the word: %d\n", longestWord(str));
    return 0;
}

int longestWord(char *string)
{
    char word[20], max[20], c;
    int i = 0, j = 0, mark = 0;
    int k = 0;
    int r = 0;
    for (i = 0; i < strlen(string); i++)
    {
        while (i < strlen(string) && string[i] != 32 && string[i] != 0 && (string[i] < 54 || string[i] > 57))
        {
            word[j++] = string[i++];
        }
        if (j != 0)
        {
            k++;
            word[j] = '\0';
            if (!mark)
            {
                mark = !mark;
                strcpy(max, word);
            }
            if (strlen(word) > strlen(max))
            {
                r = k;
                strcpy(max, word);
            }
            j = 0;
        }
    }

    printf("\"");
    for (i = 0; i < strlen(max) - 1; i++)
    {
        printf("%c", max[i]);
    }
    printf("\"");
    printf(" is the longest word in the sentence.");
    return r;
}