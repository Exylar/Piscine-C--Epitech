/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_put_nbr
*/

char my_putchar(char c);

int calcul_pow_10(int n);

void display_nbr(int nb)
{
    int digit = 0;
    int first_zero = 0;

    for (int i = 9; i > -1 ; i--) {
        digit = nb / calcul_pow_10(i);
        if (digit != 0) {
            first_zero = 1;
            my_putchar(digit+48);
            nb = nb - calcul_pow_10(i) * digit;
        } else if( first_zero == 1 && digit == 0) {
            my_putchar(48);
        }
    }
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = - nb;
    }
    display_nbr(nb);
    return 0;
}