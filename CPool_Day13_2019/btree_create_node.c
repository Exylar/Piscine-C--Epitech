/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_create_node
*/

#include "include/btree.h"
#include <stdlib.h>

btree_t *btree_create_node(void *item)
{
    btree_t *btree_node;
    btree_node = malloc(sizeof(*btree_node));
    btree_node->left = 0;
    btree_node->right = 0;
    btree_node->item = item;
    return btree_node;
}