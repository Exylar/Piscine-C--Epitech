/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    while (*str) {
        if (!(*str >= '0' && *str <= '9'))
            return 0;
        str++;
    }
    return 1;
}