/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** my_list_size
*/

#include "include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    if (!begin)
        return 0;
    if (begin)
        return 1 + my_list_size(begin->next);
    return + 1;
}