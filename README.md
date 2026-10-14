# Red-Black Tree in C

## 📌 Project Overview

This project implements a **Red-Black Tree** using the C programming language. A Red-Black Tree is a self-balancing Binary Search Tree that maintains balance using node colors and tree rotations.

The project provides a menu-driven interface to perform different operations on the tree and includes validation to ensure that the Red-Black Tree properties are maintained after insertion and deletion.

## 🚀 Features

- Insert a node
- Delete a node
- Find minimum element
- Find maximum element
- Delete minimum element
- Delete maximum element
- Left rotation
- Right rotation
- Inorder traversal
- Display tree structure
- Insertion fix-up
- Deletion fix-up
- Red-Black Tree validation
- Menu-driven interface

## 🌳 Red-Black Tree Properties

A valid Red-Black Tree follows these rules:

1. Every node is either **Red** or **Black**.
2. The root node is always **Black**.
3. Every NIL leaf is **Black**.
4. A Red node cannot have a Red child.
5. Every path from a node to its descendant NIL nodes contains the same number of Black nodes.

## 📂 Project Structure

```text
Red-Black-Tree-C/
│
├── main.c
├── main.h
├── insert.c
├── insert_fix.c
├── delete.c
├── delete_fixup.c
├── delete_min.c
├── delete_max.c
├── rotate.c
├── find_min.c
├── find_max.c
├── display.c
├── validate.c
├── Makefile
└── README.md


🛠️ Technologies Used
C Programming
Data Structures
Binary Search Trees
Red-Black Trees
Pointers
Dynamic Memory Allocation
Recursion
Makefile
GCC Compiler

📋 Menu
========================================
          RED BLACK TREE MENU
========================================
1. Insert
2. Delete
3. Find Minimum
4. Find Maximum
5. Delete Minimum
6. Delete Maximum
7. Display
8. Validate Tree
9. Exit
========================================

📚 Learning Outcomes

Through this project, I gained practical knowledge of:

Self-balancing binary search trees
Tree rotations
Insertion and deletion algorithms
Red-Black Tree balancing
Recursion and pointers
Dynamic memory allocation
Modular C programming
Data structure validation
Makefile-based compilation and debugging
