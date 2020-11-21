/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p < 0 || p > 30)
        return 0;
    if (p == 0)
        return 1;
    for (int i = 1; i <= p; i++) {
        if (nb < 0 && i == p && result * nb > 2147483647)
            return 0;
        if ( nb > 0 && (i == p && result * nb <= 0))
            return 0;
        result = result * nb;
    }
    return result;
}