/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_rev_list
*/

#include "include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin);

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *ad_actual;
    linked_list_t *ad_temp;
    linked_list_t *ad_temp_next;

    ad_actual = *begin;
    ad_temp = 0;
    while (ad_actual->next) {
        ad_temp_next = ad_actual->next;
        ad_actual->next = ad_temp;
        ad_temp = ad_actual;
        ad_actual = ad_temp_next;
    }
    ad_actual->next = ad_temp;
    begin[0] = ad_actual;
}