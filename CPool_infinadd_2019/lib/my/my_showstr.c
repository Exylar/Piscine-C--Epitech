/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_showstr
*/

#include <unistd.h>

void my_putchar(char c);
int my_putnbr_base(int nbr, char const *base);

int my_showstr(char const *str)
{
    for (str; *str; str++) {
        if (*str >= ' ' && *str <= '~')
            my_putchar(*str);
        else {
            my_putchar('\\');
            *str < 16 ? my_putchar('0') : 1;
            my_putnbr_base(*str, "0123456789abcdef");
        }
    }
    return 0;
}