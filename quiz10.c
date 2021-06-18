//a a *b d a d b
#include <stdio.h>
#include <stdlib.h>

struct List
{
    char data;
    struct List *next;
};

void printList(struct List *list)
{
    while (list != NULL)
    {
        printf("%c -->", list->data);
        list = list->next;
    }
}

struct List *stringToList(char s[])
{

    struct List *Ptr;
    struct List *firstPtr;
    Ptr = malloc(sizeof(struct List));
    firstPtr = Ptr;
    for (int i = 0; i < 8; i++)
    {
        Ptr->data = s[i];
        if (s[i] == '\0')
        {
            Ptr->next = NULL;
            return firstPtr;
        }
        else
        {
            Ptr = Ptr->next;
        }
    }
}

int main()
{
    char s[9] = "abc test";
    printList(stringToList(s));
}