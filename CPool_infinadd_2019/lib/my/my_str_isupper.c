/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isupper
*/

int my_str_isupper(char const *str)
{
    for (str; *str; str++) {
        if (!(*str >= 'A' && *str <= 'Z'))
            return 0;
    }
    return 1;
}