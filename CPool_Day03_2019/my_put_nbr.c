/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_put_nbr
*/

int calcul_pow_10(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result = result * 10;
    }
    return result;
}

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

void last_number()
{
    my_putchar('-');
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        last_number();
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = - nb;
    }
    display_nbr(nb);
    return 0;
}