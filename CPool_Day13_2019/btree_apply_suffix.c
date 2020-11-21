/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_apply_suffix
*/

#include "include/btree.h"

void btree_apply_suffix(btree_t *root, int (*applyf)(void *))
{
    if (root->right)
        btree_apply_prefix(root->right, applyf);
    else if (root->left)
        btree_apply_prefix(root->right, applyf);
    applyf(root->item);
}