#include <stdio.h>
struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

int main()
{
    struct TreeNode root, leftNode, rightNode;
    root.data = 147;
    root.left = &leftNode;
    root.right = &rightNode;
    leftNode.data = 5;
    rightNode.data = 7;

    printf("---------original node---------\n");
    printf("root : %d\n", root.data);
    printf("leftnode : %d\n", root.left->data);
    printf("rightnode : %d\n", root.right->data);
    printf("---------node after shifting---------\n");
    printf("root value : %d\n", root.data);
    root.left->data = root.left->data << 2;
    root.right->data = root.right->data >> 2;
    printf("leftnode after left shift : %u\n", root.left->data);
    printf("rightnode after right shift : %u\n", root.right->data);
}