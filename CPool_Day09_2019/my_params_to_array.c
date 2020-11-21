/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** my_params_to_array
*/

#include <stdlib.h>
#include "include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    int i = 0;

    if (ac == 0)
        return 0;
    struct info_param *struct_array;
    struct_array = malloc(sizeof(struct info_param) * (ac + 1));
    for (i = 0; i < ac; i++) {
        struct_array[i].length = my_strlen(av[i]);
        struct_array[i].str = av[i];
        struct_array[i].copy = my_strdup(av[i]);
        struct_array[i].word_array = my_str_to_word_array(av[i]);
    }
    struct_array[i].str = 0;
    return struct_array;
}