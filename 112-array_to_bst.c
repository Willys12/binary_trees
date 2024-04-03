#include "binary_trees.h"

/**
 * bst_contains -Checks if a value is present in the BST.
 * @root: A pointer to the root node of the BST.
 * @value: The value to search for.
 * Return: 0 on success.
 */
int bst_contains(bst_t *root, int value)
{
bst_t *current = root;
while (current != NULL)
{
if (current->n == value)
{
return (1);
}
current = (value < current->n) ? current->left : current->right;
}
return (0);
}

/**
 * bst_free - Frees all nodes in the BST.
 * @root: A pointer to the root node of the BST.
 * Return: Nothing.
 */
void bst_free(bst_t *root)
{
if (root == NULL)
{
return;
}
bst_free(root->left);
bst_free(root->right);

free(root);
}
/**
 * array_to_bst - builds a Binary Search Tree from an array.
 * @array:  is a pointer to the first element of the array.
 * @size: the number of element in the array.
 * Return: return a pointer to the root node of the created BST.
 */
bst_t *array_to_bst(int *array, size_t size)
{
bst_t *root;
size_t i = 0;

if (array == NULL || size == 0)
{
return (NULL);
}

root = NULL;

for (; i < size; i++)
{
if (!bst_contains(root, array[i]))
{
if (bst_insert(&root, array[i]) == NULL)
{
bst_free(root);
return (NULL);
}
}
}
return (root);
}
