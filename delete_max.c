#include "main.h"

void delete_max(void)
{
    Node *max;

    max = find_max(root);

    if (max == NIL)
    {
        printf("Tree is empty\n");
        return;
    }

    delete_node(max->data);
}