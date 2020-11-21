/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_apply_infix
*/

#include "include/btree.h"

void btree_apply_infix(btree_t *root, int (*applyf)(void *))
{
    if (!root) {
        if (root->right)
            btree_apply_prefix(root->right, applyf);
        applyf(root->item);
        if (root->left)
            btree_apply_prefix(root->right, applyf);
    }
}