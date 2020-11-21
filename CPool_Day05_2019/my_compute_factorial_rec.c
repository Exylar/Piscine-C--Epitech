/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_factorial_rec
*/

int my_compute_factorial_rec(int nb)
{
    if (nb >= 1 && nb <= 12)
        return nb * my_compute_factorial_rec(nb - 1);
    else if (nb == 0)
        return 1;
    else
        return 0;
}