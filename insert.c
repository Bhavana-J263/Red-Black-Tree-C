#include "main.h"

void insert_node(int data)
{
    Node *z;
    Node *y;
    Node *x;

    z = (Node *)malloc(sizeof(Node));

    z->data = data;
    z->color = RED;
    z->left = NIL;
    z->right = NIL;

    y = NIL;
    x = root;

    while (x != NIL)
    {
        y = x;

        if (data < x->data)
            x = x->left;
        else if (data > x->data)
            x = x->right;
        else
        {
            printf("Element already exists\n");
            free(z);
            return;
        }
    }

    z->parent = y;

    if (y == NIL)
    {
        root = z;
    }
    else if (data < y->data)
    {
        y->left = z;
    }
    else
    {
        y->right = z;
    }

    insert_fix(z);

    printf("Insertion Successful\n");
}