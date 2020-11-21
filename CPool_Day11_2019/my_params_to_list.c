/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_params_to_list
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_put_in_list(struct linked_list **list, char *name_param)
{
    linked_list_t *element;
    element = malloc(sizeof(*element));
    element->data = name_param;
    element->next = *list;
    *list = element;
    return 0;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    struct linked_list *linked_list_t;
    linked_list_t = NULL;
    for (int i = 0; i < ac; i++) {
        my_put_in_list(&linked_list_t, av[i]);
    }
    return linked_list_t;
}