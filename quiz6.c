#include <stdio.h>
int indexOf(char *, char *);
int main()
{
    printf("%d\n", indexOf("This is a string", "is"));

    printf("%d\n", indexOf("This is a string", "String"));
}

int indexOf(char *str1, char *str2)
{
    int find;
    int i;
    int j;
    for (i = 0; i < sizeof(*str1) / sizeof(str1[0]); ++i) //從字串一一檢查
    {
        if (i + (sizeof(*str2) / sizeof(str2[0])) > sizeof(*str1) / sizeof(str1[0])) //不超過範圍
        {
            break;
        }
        find = 1;                                             //如果檢查後皆相同，則為1，不同則為0
        for (j = 0; j < sizeof(*str2) / sizeof(str2[0]); ++j) //一一檢查子字串是否在字串中
            if (str1[i + j] != str2[j])
            {
                find = 0;
                break;
            }
        if (find == 1)
        {
            return i; //相同字元位置
        }
    }
    return -1;
}