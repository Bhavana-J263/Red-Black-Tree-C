#include "main.h"

void inorder(Node *x)
{
    if (x == NIL)
        return;

    inorder(x->left);

    if (x->color == RED)
        printf("%d(R) ", x->data);
    else
        printf("%d(B) ", x->data);

    inorder(x->right);
}

void display_tree(Node *x, int space)
{
    int i;

    if (x == NIL)
        return;

    space += 5;

    display_tree(x->right, space);

    printf("\n");

    for (i = 5; i < space; i++)
        printf(" ");

    if (x->color == RED)
        printf("%d(R)\n", x->data);
    else
        printf("%d(B)\n", x->data);

    display_tree(x->left, space);
}