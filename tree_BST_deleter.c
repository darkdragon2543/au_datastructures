#include "treefunctions.h"

treenode* deleteNodeBST(treenode* root, int k)
{
	
	// if reached the end of the tree without finding then return NULL
	if (root==NULL)
		return NULL;
	
	// if key is greater then traverse right
	else if (k > root->key)
		root->right = deleteNodeBST(root->right, k);
	
	// if it is smaller or equal traverse left
	else if (k < root->key)
		root->left = deleteNodeBST(root->left, k);

	// if found the node, then delete it
	else
	{
		if(root->right == NULL && root->left == NULL)
		{
			free(root);
			return NULL;
		}

		else if(root->right == NULL)
		{
			treenode* shift = root->left;
			free(root);
			return shift;
		}

		else if(root->left == NULL)
		{
			treenode* shift = root->right;
			free(root);
			return shift;
		}

		else
		{
			// find the next biggest node
			treenode* maxfinder = root;
			while(maxfinder->right != NULL)
				maxfinder = maxfinder->right;

			// swap it into root, and delete it
			root->key = maxfinder->key;
			root->right = deleteNodeBST(root->right, maxfinder->key);

			return root;
		}

	}

	return root;
	
}


