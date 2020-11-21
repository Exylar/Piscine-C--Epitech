/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** concat_params
*/

#include <stdlib.h>
#include "include/libmy.h"

char *concat_params(int argc, char **argv)
{
    char *str_new;
    int size_mem = 0;
    int k = 0;

    for (int i = 0; i < argc; i++)
        size_mem = size_mem + my_strlen(argv[i] + 1);
    str_new = malloc(sizeof(char) * size_mem);
    for (int i = 0; i < argc; i++) {
        for (int j = 0; j < my_strlen(argv[i]) + 1; j++) {
            str_new[k] = argv[i][j];
            k++;
        }
        if (i + 1 < argc)
            str_new[k -1] = '\n';
    }
    return str_new;
}