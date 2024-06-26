#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using pre-order traversal.
 * @tree: The tree being checked.
 * @func: A pointer to a function to be called for each node.
 * Return:Nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}

binary_tree_inorder((*tree).left, func);
func((*tree).n);
binary_tree_inorder((*tree).right, func);
}
