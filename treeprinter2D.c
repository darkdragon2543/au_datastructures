#include "treefunctions.h"

// DISCLAIMER: These functions have been taken from GeeksForGeeks, as they are not present in the graded list, and only serve as a visual guide for myself.

void printTree2DUtil(treenode* root, int space)
{
    if (root == NULL)
        return;

    space += 10;
 
    printTree2DUtil(root->right, space);

    printf("\n");
    for (int i = 10; i < space; i++)
        printf(" ");
    printf("%d\n", root->key);
 
    printTree2DUtil(root->left, space);
}
 
void printTree2D(treenode* root)
{
    printTree2DUtil(root, 0);
}