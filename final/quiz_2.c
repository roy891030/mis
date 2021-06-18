#include <stdio.h>
struct NODE
{
    char data;
    struct NODE *next;
};
typedef struct NODE NODE;
typedef NODE *NODEPtr;
void print(NODE *node)
{
    while (node->next != NULL)
    {
        printf("%c --> ", node->data);
        node = node->next;
    }
    printf("%c --> NULL", node->data);
}

void printRevList(NODE *node)
{
    char lib[2];
    int i = 0;
    while (node->next != NULL)
    {
        lib[i] = node->data;
        node = node->next;
        i++;
    }
    printf("NULL <-- %c", node->data);
    for (i = sizeof(lib) - 1; i >= 0; i--)
    {
        printf(" <-- %c", lib[i]);
    }
    printf("\n");
}

int main()
{
    //初始化
    NODE a, b, c;
    NODE *ptr = &a; //宣告ptr，並將他只向節點a
    a.data = 'a';
    a.next = &b;
    b.data = 'b';
    b.next = &c;
    c.data = 'c';
    c.next = NULL;
    printf("Original Linked List : ");
    print(&a);
    //將它reverse
    printf("\n");
    printf("Reversed Linked List : ");
    printRevList(&a);
}
