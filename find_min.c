#include "main.h"

Node *find_min(Node *x)
{
    if (x == NIL)
        return NIL;

    while (x->left != NIL)
        x = x->left;

    return x;
}