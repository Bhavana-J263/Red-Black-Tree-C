#include "main.h"

void insert_fix(Node *z)
{
    Node *y;

    while (z->parent->color == RED)
    {
        if (z->parent == z->parent->parent->left)
        {
            y = z->parent->parent->right;

            /* Case 1 */
            if (y->color == RED)
            {
                z->parent->color = BLACK;
                y->color = BLACK;
                z->parent->parent->color = RED;

                z = z->parent->parent;
            }
            else
            {
                /* Case 2 */
                if (z == z->parent->right)
                {
                    z = z->parent;
                    left_rotate(z);
                }

                /* Case 3 */
                z->parent->color = BLACK;
                z->parent->parent->color = RED;

                right_rotate(z->parent->parent);
            }
        }
        else
        {
            y = z->parent->parent->left;

            /* Case 1 */
            if (y->color == RED)
            {
                z->parent->color = BLACK;
                y->color = BLACK;
                z->parent->parent->color = RED;

                z = z->parent->parent;
            }
            else
            {
                /* Case 2 */
                if (z == z->parent->left)
                {
                    z = z->parent;
                    right_rotate(z);
                }

                /* Case 3 */
                z->parent->color = BLACK;
                z->parent->parent->color = RED;

                left_rotate(z->parent->parent);
            }
        }
    }

    root->color = BLACK;
    root->parent = NIL;
}