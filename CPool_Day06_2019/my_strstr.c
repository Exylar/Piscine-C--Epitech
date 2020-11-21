/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strstr
*/

#include <stddef.h>

int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    char new_str[my_strlen(to_find)];
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find[0 + j]) {
            new_str[j] = str[i];
            j++;
        }
        if (my_strcmp(to_find, new_str) == 0)
            return &str[i - my_strlen(to_find) + 1];
        i++;
    }
    return NULL;
}