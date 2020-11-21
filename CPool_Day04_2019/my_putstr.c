/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_putstr
*/

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}