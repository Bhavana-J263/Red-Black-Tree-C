#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define RED   1
#define BLACK 0

typedef struct node
{
    int data;
    int color;

    struct node *left;
    struct node *right;
    struct node *parent;

} Node;

/* Global root and NIL sentinel */
extern Node *root;
extern Node *NIL;

/* Rotations */
void left_rotate(Node *x);
void right_rotate(Node *x);

/* Insertion */
void insert_node(int data);
void insert_fix(Node *z);

/* Deletion */
void delete_node(int data);
void delete_fix(Node *x);

/* Minimum / Maximum */
Node *find_min(Node *x);
Node *find_max(Node *x);

void delete_min(void);
void delete_max(void);

/* Display */
void inorder(Node *x);
void display_tree(Node *x, int space);

/* Validation */
int validate_tree(Node *x);

#endif