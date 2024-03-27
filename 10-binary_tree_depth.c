#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of the tree.
 * @tree: A pointer to the node to measure depth.
 * Return: Depth of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

while (tree->parent)
{
depth++;
tree = (*tree).parent;
}

return (depth);
}
