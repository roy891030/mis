#include <stdio.h>
struct book
{
    char name[10];
    char class[10];
    int score;
};
void print(void)
{
    FILE *file = fopen("grade.txt", "r");
    struct book my_b00k;
    int count = 0;
    char c;
    while (!feof(file))
    {
        count++;
        //scanf(file, "%s %s %d", my_b00k.name, my_b00k.class, &my_b00k.score);
        // printf("%-10s %-10s %3d\n", my_b00k.name, my_b00k.class, my_b00k.score);
        c = fgetc(file);
        printf("%c", c);
    }
    printf(" There are %d students\n", count / 23);
    fclose(file);
}
void append(void)
{
    FILE *file = fopen("grade.txt", "a");
    printf("You're inputting grades currently.\n");
    printf("Please enter student's name: ");
    struct book my_book;
    scanf("%s", my_book.name);
    printf("Please enter the student's class: ");
    scanf("%s", my_book.class);
    printf(" Please enter the student's score: ");
    scanf("%d", &my_book.score);
    fprintf(file, "%-10s %-10s %3d\n", my_book.name, my_book.class, my_book.score);
    printf("1 record has been added.\n");
    fclose(file);
}
int main()
{
    int choice;

    while (1)
    {
        printf("Welcome, enter choice:\n1 to input new grades,\n2 to print out all records in current file\n-1 to leave.");
        printf("\n");
        scanf("%d", &choice);
        printf("\nYour selection: %d\n", choice);
        if (choice != -1 && 1 && 2)
        {
            printf("Please enter a valid number.\n");
        }
        if (choice == -1)
        {
            printf("bye bye");
            break;
        }
        else
        {
            switch (choice)
            {
            case 1:
                append();
                printf("Would you like to add new records? 1 for yes, 0 for no\n");
                int choice1;
                scanf("%d", &choice1);
                if (choice1 == 0)
                {
                    printf("Leaving the function...\n");
                }
                while (choice1 == 1)
                {
                    append();
                    printf("Would you like to add new records? 1 for yes, 0 for no\n");
                    int choice1;
                    scanf("%d", &choice1);
                    if (choice1 == 0)
                    {
                        printf("Leaving the function...");
                        break;
                    }
                }
                break;
            case 2:
                print();
                break;
            }
        }
    }
}