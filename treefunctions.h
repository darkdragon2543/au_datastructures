#ifndef TREEFUNCTIONS_H
#define TREEFUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
	int key;
	struct TreeNode* left;
	struct TreeNode* right;
}treenode;

treenode* arrayToBST(int *a , int n);

treenode* deleteNodeBST(treenode* root, int k);

void printTree2DUtil(treenode* root, int space);

void printTree2D(treenode* root);

void heapify(int a[] , int father , int heapend);

void heapSort(int a[] , int l);

#endif