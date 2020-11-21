/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_putnbr_base
*/

char my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

int my_compute_power_it(int nb, int p) {
    int result = 1;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    for (int i = 1; i <= p; i++) {
        if (i == p && result * nb <= 0) {
            return 0;
        }
        result = result * nb;
    }
    return result;
}

int my_putnbr_base(int nbr, char const *base)
{
    int i = 0;
    int n_base = my_strlen(base);
    int k = 0;
    int nb = 0;

    if (n_base <= 1)
        return 0;

    while (nbr >= my_compute_power_it(n_base, i))
        i++;
    k = i;
    while (nbr >= n_base || i > 0) {
        if ( !((base[nbr / my_compute_power_it(n_base, i)] != 0) && (i == k)))
            my_putchar(base[nbr / my_compute_power_it(n_base, i)]);

        if (nbr >= my_compute_power_it(n_base, i)) {
            nb = nbr / my_compute_power_it(n_base, i);
            nbr = nbr - (my_compute_power_it(n_base, i)) * nb;
        }
        i--;
    }
    my_putchar(base[nbr]);
    return 0;
}