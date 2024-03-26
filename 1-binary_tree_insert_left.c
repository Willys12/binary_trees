#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node in the left leaf.
 * @parent: Parent of the node to be inserted.
 * @value: Value to be inserted at the node.
 * Return: The pointer to the new node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (binary_tree_node(NULL, value));

}

if ((*parent).left == NULL)
{
(*parent).left = binary_tree_node(parent, value);
}
else
{
binary_tree_insert_left((*parent).left, value);
}

return (parent);
}
