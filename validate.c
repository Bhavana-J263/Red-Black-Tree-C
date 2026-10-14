#include "main.h"

/* Check Red-Black Tree properties */
static int check_tree(Node *node, int black_count, int *path_black_count)
{
    /* Reached NIL leaf */
    if (node == NIL)
    {
        if (*path_black_count == -1)
        {
            *path_black_count = black_count;
            return 1;
        }

        return black_count == *path_black_count;
    }

    /* Red node cannot have Red child */
    if (node->color == RED)
    {
        if (node->left->color == RED ||
            node->right->color == RED)
        {
            return 0;
        }
    }

    /* Count black nodes */
    if (node->color == BLACK)
    {
        black_count++;
    }

    /* Check left subtree */
    if (!check_tree(node->left, black_count, path_black_count))
    {
        return 0;
    }

    /* Check right subtree */
    if (!check_tree(node->right, black_count, path_black_count))
    {
        return 0;
    }

    return 1;
}

int validate_tree(Node *x)
{
    int black_count = 0;
    int path_black_count = -1;

    /* Empty tree is valid */
    if (root == NIL)
    {
        return 1;
    }

    /* Root must be BLACK */
    if (root->color != BLACK)
    {
        return 0;
    }

    return check_tree(x, black_count, &path_black_count);
}