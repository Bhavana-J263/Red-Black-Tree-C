#include "main.h"

void delete_min(void)
{
    Node *min;

    min = find_min(root);

    if (min == NIL)
    {
        printf("Tree is empty\n");
        return;
    }

    delete_node(min->data);
}