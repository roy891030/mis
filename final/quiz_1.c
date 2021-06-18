#include <stdio.h>
#include <string.h>

int main()
{
    char find[10] = "man"; //從這裡輸入想要查詢的字串
    char book[300];
    FILE *file = fopen("hw2_q1.txt", "r");
    int count = 0;
    while (!feof(file))
    {
        fscanf(file, "%s", book);
        if (strcmp(find, book) == 0)
        {
            count++;
        }
    }
    printf("The number of times for the word “%s”: %d times", find, count);
    fclose(file);
}