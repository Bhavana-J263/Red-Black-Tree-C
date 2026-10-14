#include "main.h"

void delete_fix(Node *x)
{
    Node *w;

    while (x != root && x->color == BLACK)
    {
        if (x == x->parent->left)
        {
            w = x->parent->right;

            /* Case 1 */
            if (w->color == RED)
            {
                w->color = BLACK;
                x->parent->color = RED;

                left_rotate(x->parent);

                w = x->parent->right;
            }

            /* Case 2 */
            if (w->left->color == BLACK &&
                w->right->color == BLACK)
            {
                w->color = RED;
                x = x->parent;
            }
            else
            {
                /* Case 3 */
                if (w->right->color == BLACK)
                {
                    w->left->color = BLACK;
                    w->color = RED;

                    right_rotate(w);

                    w = x->parent->right;
                }

                /* Case 4 */
                w->color = x->parent->color;
                x->parent->color = BLACK;
                w->right->color = BLACK;

                left_rotate(x->parent);

                x = root;
            }
        }
        else
        {
            w = x->parent->left;

            /* Case 1 */
            if (w->color == RED)
            {
                w->color = BLACK;
                x->parent->color = RED;

                right_rotate(x->parent);

                w = x->parent->left;
            }

            /* Case 2 */
            if (w->right->color == BLACK &&
                w->left->color == BLACK)
            {
                w->color = RED;
                x = x->parent;
            }
            else
            {
                /* Case 3 */
                if (w->left->color == BLACK)
                {
                    w->right->color = BLACK;
                    w->color = RED;

                    left_rotate(w);

                    w = x->parent->left;
                }

                /* Case 4 */
                w->color = x->parent->color;
                x->parent->color = BLACK;
                w->left->color = BLACK;

                right_rotate(x->parent);

                x = root;
            }
        }
    }

    x->color = BLACK;
}