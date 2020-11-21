/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_search_item
*/

#include <stddef.h>
#include "include/btree.h"

void *btree_search_item(btree_t const *root, void const *data_ref,
        int (*cmpf)())
{
    if (!(root))
        return NULL;
    if ( cmpf(root->item, item) == 1)
        return root->item;
    else if ( cmpf(root->item, item) > 0)
        btree_insert_data(&root->right, data_ref, cmpf);
    else
        btree_insert_data(&root->left, data_ref, cmpf);
}