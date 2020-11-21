/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isupper
*/

int my_str_isupper(char const *str)
{
    while(*str) {
        if (!(*str >= 'A' && *str <= 'Z'))
            return 0;
        str++;
    }
    return 1;
}