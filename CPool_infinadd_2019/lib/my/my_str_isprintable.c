/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    for (str; *str; str++) {
        if (!(*str >= ' ' && *str <= '~'))
            return 0;
    }
    return 1;
}