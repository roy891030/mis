#include <stdio.h>
#include <stdlib.h>
struct listNode
{
    char data;
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;
void instructions(void)
{
    printf("Enter your choice:\n1 to insert an element into the list\n2 to delete an element from the list\n3 to end");
}
void insert(ListNodePtr *sPtr, char value);
char delete (ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);

int main()
{
    ListNodePtr starPtr = NULL;
    int choice;
    char item;
    instructions();
    printf("?");
    scanf("%d", &choice);
    while (choice != 3)
    {
        switch (choice)
        {
        case 1:
            printf("Enter a character: ");
            scanf("\n%c", &item);
            insert(starPtr, item);
            printList(starPtr);
            break;
        case 2:
            if (!isEmpty(starPtr))
            {
                printf("Enter character to be delete: ");
                scanf("\n%c", &item);
                if (delete (starPtr, item))
                {
                    printf("%c deleted.\n", item);
                    printList(starPtr);
                }
                else
                {
                    printf("%c not found.\n\n", item);
                }
            }
            else
            {
                puts("Lsit is empty.\n");
            }
            break;

        default:
            puts("Invalid choice.\n");
            instructions();
            break;
        }
        printf("?");
        scanf("%d", &choice);
    }
}
void printList(ListNodePtr currentPtr)
{
    if (isEmpty(currentPtr))
    {
        puts("List is empty.\n");
    }
    else
    {
        puts("The list is: ");
        while (currentPtr != NULL)
        {
            printf("%c--> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        puts("NULL\n");
    }
}
void insert(ListNodePtr *sPtr, char value)
{
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    newPtr = malloc(sizeof(ListNode));
    if (newPtr != NULL)
    {
        newPtr->data = value;
        newPtr->nextPtr = NULL;
        previousPtr = NULL;
        currentPtr = *sPtr;
        while (currentPtr != NULL && value > currentPtr->data)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if (previousPtr == NULL)
        {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else
    {
        printf("%c noe inserted.No memory avilable.\n", value);
    }
}
char delete (ListNodePtr *sPtr, char value)
{
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    ListNodePtr tempPtr;
    if (value == (*sPtr)->data)
    {
        tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
        return value;
    }
    else
    {
        previousPtr = *sPtr;
        currentPtr = (*sPtr)->nextPtr;
        while (currentPtr != NULL && currentPtr->data != value)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if (currentPtr != NULL)
        {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }
    return '\n';
}

int isEmpty(ListNodePtr sPtr)
{
    return sPtr == NULL;
}