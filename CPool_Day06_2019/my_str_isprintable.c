/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    while(*str) {
        if (!(*str >= ' ' && *str <= '~'))
            return 0;
        str++;
    }
    return 1;
}