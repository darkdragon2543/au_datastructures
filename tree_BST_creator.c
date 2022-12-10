#include "treefunctions.h"

treenode* arrayToBST(int *a , int n)
{
	// creates the head of the tree
	treenode* root = (treenode*) malloc(sizeof(treenode));
	treenode* main_root = root;

	root->key = *(a);
	root->left = NULL;
	root->right = NULL;

	for (int i = 1; i < n; ++i)
	{

		// create a new treenode
		treenode* new = (treenode*) malloc(sizeof(treenode));
		new->key = *(a+i);
		new->right = NULL;
		new->left = NULL;

		// places new treenode in appropriate position
		while(root != NULL)
		{
			if(new->key > root->key) // if new treenode is bigger
			{
				if ( (root->right) == NULL ) // and the right branch is empty
				{
					root->right = new; // place it there
					//printf("%d " , *(a+i));
					break;
				}
				root = root->right; // otherwise traverse right
			}

			else // if new treenode is smaller
			{
				if ( (root->left) == NULL ) // and the left branch is empty
				{
					root->left = new; // place it there
					//printf("%d " , *(a+i));
					break;
				}
				root = root->left; // otherwise traverse left
			}
		}

		// resets traversal
		root = main_root;
	}

	return main_root;
}