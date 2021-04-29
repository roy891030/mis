#include <stdio.h>
//65-122 0
int wordCount(char *sentence)
{
    int x;
    int count = 0;
    int space = 1;

    for (x = 0; sentence[x] != '\0'; x++) //逐一檢查每一字元
    {
        if (sentence[x] <= 122 && sentence[x] >= 65 || sentence[x] == ' ') // 限制sentence[]只能在A-z之間
        {
            if (' ' == sentence[x])
            {
                space = 1; //如果是' '則設立狀態為1
            }
            else if (space == 1) //直到不式' ' 後，則將狀態改為0並計數
            {
                space = 0;

                count++;
            }
        }
        else
            continue;
    }
    return count;
}

int main()
{
    char sentence[] = "There are 6 words in the sentence.";
    printf("Total %d word(s) in the sentence.\n", wordCount(sentence));
}