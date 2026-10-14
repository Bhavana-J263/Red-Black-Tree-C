#include "main.h"

static Node *search_node(int data)
{
    Node *x = root;

    while (x != NIL)
    {
        if (data == x->data)
            return x;

        if (data < x->data)
            x = x->left;
        else
            x = x->right;
    }

    return NIL;
}

static void transplant(Node *u, Node *v)
{
    if (u->parent == NIL)
    {
        root = v;
    }
    else if (u == u->parent->left)
    {
        u->parent->left = v;
    }
    else
    {
        u->parent->right = v;
    }

    v->parent = u->parent;
}

void delete_node(int data)
{
    Node *z;
    Node *y;
    Node *x;
    int original_color;

    z = search_node(data);

    if (z == NIL)
    {
        printf("Element not found\n");
        return;
    }

    y = z;
    original_color = y->color;

    if (z->left == NIL)
    {
        x = z->right;
        transplant(z, z->right);
    }
    else if (z->right == NIL)
    {
        x = z->left;
        transplant(z, z->left);
    }
    else
    {
        y = find_min(z->right);

        original_color = y->color;
        x = y->right;

        if (y->parent == z)
        {
            x->parent = y;
        }
        else
        {
            transplant(y, y->right);

            y->right = z->right;
            y->right->parent = y;
        }

        transplant(z, y);

        y->left = z->left;
        y->left->parent = y;

        y->color = z->color;
    }

    free(z);

    if (original_color == BLACK)
        delete_fix(x);

    printf("Deletion Successful\n");
}