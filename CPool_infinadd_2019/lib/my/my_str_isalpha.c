/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    for (str; *str; str++) {
        if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
            return 0;
    }
    return 1;
}