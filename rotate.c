#include "main.h"

void left_rotate(Node *x)
{
    Node *y;

    y = x->right;

    x->right = y->left;

    if (y->left != NIL)
        y->left->parent = x;

    y->parent = x->parent;

    if (x->parent == NIL)
    {
        root = y;
    }
    else if (x == x->parent->left)
    {
        x->parent->left = y;
    }
    else
    {
        x->parent->right = y;
    }

    y->left = x;
    x->parent = y;
}

void right_rotate(Node *x)
{
    Node *y;

    y = x->left;

    x->left = y->right;

    if (y->right != NIL)
        y->right->parent = x;

    y->parent = x->parent;

    if (x->parent == NIL)
    {
        root = y;
    }
    else if (x == x->parent->right)
    {
        x->parent->right = y;
    }
    else
    {
        x->parent->left = y;
    }

    y->right = x;
    x->parent = y;
}