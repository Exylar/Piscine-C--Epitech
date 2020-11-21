/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0 || nb > 12)
        return 0;
    for (int i = 1; i <= nb; i++)
        result = result * i;
    return result;
}