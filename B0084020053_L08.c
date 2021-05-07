#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct data
    {
        char name[10];
        char class[10];
        int eng;
        int math;
    };

    struct data student[6];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("enter the name:　");
        scanf("%s", student[i].name);
        printf("enter the class: ");
        scanf("%s", student[i].class);
        printf("enter the english score: ");
        scanf("%d", &student[i].eng);
        printf("enter the math score: ");
        scanf("%d", &student[i].math);
        printf("\n");
    }
}