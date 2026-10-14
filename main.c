#include "main.h"

Node *root;
Node *NIL;

void init_tree(void)
{
    NIL = (Node *)malloc(sizeof(Node));

    NIL->data = 0;
    NIL->color = BLACK;
    NIL->left = NIL;
    NIL->right = NIL;
    NIL->parent = NIL;

    root = NIL;
}

int main(void)
{
    int choice;
    int data;

    init_tree();

    while (1)
    {
        printf("\n========================================\n");
        printf("          RED BLACK TREE MENU\n");
        printf("========================================\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Find Minimum\n");
        printf("4. Find Maximum\n");
        printf("5. Delete Minimum\n");
        printf("6. Delete Maximum\n");
        printf("7. Display\n");
        printf("8. Validate Tree\n");
        printf("9. Exit\n");
        printf("========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &data);

                insert_node(data);
                break;

            case 2:
                printf("Enter the element to delete: ");
                scanf("%d", &data);

                delete_node(data);
                break;

            case 3:
            {
                Node *min = find_min(root);

                if (min == NIL)
                    printf("Tree is empty\n");
                else
                    printf("Minimum element: %d\n", min->data);

                break;
            }

            case 4:
            {
                Node *max = find_max(root);

                if (max == NIL)
                    printf("Tree is empty\n");
                else
                    printf("Maximum element: %d\n", max->data);

                break;
            }

            case 5:
                delete_min();
                break;

            case 6:
                delete_max();
                break;

            case 7:
                if (root == NIL)
                {
                    printf("Tree is empty\n");
                }
                else
                {
                    printf("\nInorder Traversal:\n");
                    inorder(root);

                    printf("\n\nTree Structure:\n");
                    display_tree(root, 0);
                }
                break;

            case 8:
                if (validate_tree(root))
                    printf("Tree is a valid Red-Black Tree\n");
                else
                    printf("Tree is NOT a valid Red-Black Tree\n");

                break;

            case 9:
                printf("Exiting...\n");
                free(NIL);
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}