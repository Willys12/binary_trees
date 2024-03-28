#include "binary_trees.h"

/**
 * enqueue - Creates a queue.
 * @queue: First parameter
 * @queue_size: Second parameter.
 * @node: Third parameter.
 * Return: Nothing
 */
void enqueue(binary_tree_t **queue, int *queue_size, binary_tree_t *node)
{
if (node == NULL)
{
return;
}
queue[*queue_size] = node;
(*queue_size)++;
}

/**
 * dequeue - Removes a queue.
 * @queue: First parameter.
 * @queue_size: Second parameter.
 * Return: Address of new node.
 */
binary_tree_t *dequeue(binary_tree_t **queue, int *queue_size)
{
int i;
binary_tree_t *node = queue[0];

for (i = 0; i < *queue_size - 1; i++)
{
queue[i] = queue[i + 1];
}
(*queue_size)--;

return (node);
}
/**
 * binary_tree_levelorder - Goes through a binary tree using level-order.
 * @tree: A pointer to the root node of the tree.
 * @func: a pointer to a function to call for each node.
 * Return: Nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
binary_tree_t *queue[1000];
binary_tree_t *node;
int queue_size = 0;

if (tree == NULL || func == NULL)
{
return;
}

enqueue(queue, &queue_size, (binary_tree_t *)tree);
while (queue_size > 0)
{
node = dequeue(queue, &queue_size);
func((*node).n);
enqueue(queue, &queue_size, (*node).left);
enqueue(queue, &queue_size, (*node).right);
}
}
