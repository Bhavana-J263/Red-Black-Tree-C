#include "main.h"

Node *find_max(Node *x)
{
    if (x == NIL)
        return NIL;

    while (x->right != NIL)
        x = x->right;

    return x;
}