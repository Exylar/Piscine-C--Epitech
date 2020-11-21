/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_digits
*/

int my_print_digits(void)
{
    char digit = '0';

    for (digit; digit <= '9'; digit++) {
        my_putchar(digit);
    }
    return 0;
}
