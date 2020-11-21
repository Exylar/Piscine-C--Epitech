/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_strdup
*/

#include "include/libmy.h"
#include "stdlib.h"

char *my_strdup(char const *src)
{
    char *str_new;

    str_new = malloc(sizeof(char) * (my_strlen(src) + 1));
    str_new = my_strcpy(str_new, src);
    return (str_new);
}