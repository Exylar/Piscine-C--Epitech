/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    while (*str) {
        if (!(*str >= 'a' && *str <= 'z'))
            return 0;
        str++;
    }
    return 1;
}