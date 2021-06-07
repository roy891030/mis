#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //先將file繪製成一份

    FILE *file1 = fopen(argv[1], "r");
    FILE *file2 = fopen(argv[2], "r");
    FILE *file3 = fopen("mtcars.txt", "w");

    char ch;
    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, file3);
    }
    char ch1;
    fclose(file3);
    fclose(file1);

    FILE *file4 = fopen("mtcars.txt", "a");

    while ((ch1 = fgetc(file2)) != EOF)
    {
        fputc(ch1, file4);
    }

    fclose(file2);
    fclose(file4);
    //繪製完成後將檔案讀取至程式
    struct Car
    {
        char brand[20];
        char type[20];
        float mpg;
        int cyl;
        float disp;
        int hp;
    };
    struct Car cars[31];

    FILE *file5 = fopen("mtcars.txt", "r");
    int i;
    int count = 0;
    for (i = 0; i < 29; i++)
    {
        fscanf(file5, "%s %s %f %d %f %d", cars[i].brand, cars[i].type, &cars[i].mpg, &cars[i].cyl, &cars[i].disp, &cars[i].hp);
    }
    printf("               brand                type    mpg   cyl     disp     hp\n");
    for (i = 0; i < 29; i++)
    {
        if (cars[i].mpg > 20)
        {
            printf("%20s%20s%7.1f%5d%10.1f%7d", cars[i].brand, cars[i].type, cars[i].mpg, cars[i].cyl, cars[i].disp, cars[i].hp);
            printf("\n");
            count++;
        }
    }
    printf("There are 12 car(s) whose mpg > 20.\n");
}
//gcc myCProgram.c -o myCProgram.out -Wall
//    ./myCProgram.out mtcars1.txt mtcars2.txt