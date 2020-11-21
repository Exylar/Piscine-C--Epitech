/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_sort_params
*/
#include <stdio.h>

int my_strcmp(char const *s1, char const *s2);
char my_putchar(char c);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src);

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        if (i > 0 && my_strcmp(argv[i - 1], argv[i]) > 0) {
            char *memoir = argv[i - 1];
            argv[i - 1] = argv[i];
            argv[i] = memoir;
            i = 0;
        }
    }
    for (int i = 0 ; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}