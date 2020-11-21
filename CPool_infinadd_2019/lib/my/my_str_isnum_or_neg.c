/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isnum
*/

int my_str_isnum_or_neg(char const *str)
{
    for (str; *str; str++) {
        if (!(*str >= '0' && *str <= '9' || str[0] == '-'))
            return 0;
    }
    return 1;
}