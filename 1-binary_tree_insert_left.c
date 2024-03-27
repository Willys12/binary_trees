#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node in the left leaf.
 * @parent: Parent of the node to be inserted.
 * @value: Value to be inserted at the node.
 * Return: The pointer to the new node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (!parent)
{
return (NULL);
}

new_node = binary_tree_node(parent, value);
if (!new_node)
{
return (NULL);
}

if ((*parent).left)
{
(*new_node).left = (*parent).left;
parent->left->parent = new_node;
}
(*parent).left = new_node;

return (new_node);
}
