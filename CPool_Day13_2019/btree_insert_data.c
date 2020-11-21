/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_insert_data
*/

#include "include/btree.h"

void btree_insert_data(btree_t **root, void *item, int (*cmpf)())
{
    if (!(root))
        btree_create_node(item);
    else if ( cmpf((*root)->item, item) > 0)
        btree_insert_data(&(*root)->right, item, cmpf);
    else
        btree_insert_data(&(*root)->left, item, cmpf);
}