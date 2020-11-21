/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** convert_base
*/

#include <stdlib.h>
#include "include/libmy.h"

char *my_putnbr_base(int nbr, char const *base, int *v)
{
    char *result;

    if (v[1] <= 1)
        return 0;
    while (nbr >= my_compute_power_rec(v[1], v[0]))
        v[0]++;
    v[2] = v[0];
    result = malloc(sizeof(char) * v[2] + 1);
    result[v[0]] = '\0';
    while (nbr >= v[1] || v[0] > 0) {
        if (!((base[nbr / my_compute_power_rec(v[1], v[0])] != 0) && (v[0] == v[2])))
            result[v[0]] = base[nbr / my_compute_power_rec(v[1], v[0])];
        if (nbr >= my_compute_power_rec(v[1], v[0])) {
            v[3] = nbr / my_compute_power_rec(v[1], v[0]);
            nbr = nbr - (my_compute_power_rec(v[1], v[0])) * v[3];
        }
        v[0]--;
    }
    result[0] = base[nbr];
    return result;
}

int my_getnbr_base(char const *str, char const *base)
{
    int n_base = my_strlen(base);
    int n_str = my_strlen(str);
    int resu = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; base [j] != '\0'; j++) {
            if (str[i] == base[j])
                resu = resu + (j * my_compute_power_rec(n_base, n_str - i - 1));
        }
    }
    return resu;
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int value[4] = {0, my_strlen(base_to), 0, 0};

    return my_putnbr_base(my_getnbr_base(nbr, base_from),base_to, value);
}