/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_power_rec
*/

#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    if (p >= 1 ) {
        if (nb * my_compute_power_rec(nb, p - 1) <= 0)
            return 0;
        else
            return nb * my_compute_power_rec(nb, p - 1);
    }
    return 0;
}