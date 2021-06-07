#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

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
}
//gcc L9_Practice.c -o L9_Practice.out -Wall
//    ./L9_Practice mtcars1.txt mtcars2.txt