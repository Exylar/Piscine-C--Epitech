/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    for (str; *str; str++) {
        if (!(*str >= 'a' && *str <= 'z'))
            return 0;
    }
    return 1;
}