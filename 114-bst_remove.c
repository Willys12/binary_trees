#include "binary_trees.h"
bst_t *bst_min_value_node(bst_t *root);
/**
 * bst_remove - Removes a node from a Binary Search Tree.
 * @root: A pointer to the root node of the tree where the node will be removed.
 * @value: The value to remove in the tree.
 *
 * Return: A pointer to the new root node of the tree after removing the desired value.
 */
bst_t *bst_remove(bst_t *root, int value)
{
if (root == NULL)
{
return NULL;
}

if (value < root->n)
{
root->left = bst_remove(root->left, value);
}
else if (value > root->n)
{
root->right = bst_remove(root->right, value);
}
else
{
/*Node with only one child or no child*/
if (root->left == NULL)
{
bst_t *temp = root->right;
free(root);
return temp;
}
else if (root->right == NULL)
{
bst_t *temp = root->left;
free(root);
return temp;
}

bst_t *temp = bst_min_value_node(root->right);

/*Copy the inorder successor's value to this node*/
root->n = temp->n;

root->right = bst_remove(root->right, temp->n);
}

return root;
}

/**
 * bst_min_value_node - Finds the node with the minimum value in a BST.
 * @root: A pointer to the root node of the BST.
 *
 * Return: A pointer to the node with the minimum value.
 */
bst_t *bst_min_value_node(bst_t *root)
{
bst_t *current = root;

/* loop down to find the leftmost leaf */
while (current && current->left != NULL)
current = current->left;

return current;
}
