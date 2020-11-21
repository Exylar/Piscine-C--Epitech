/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_getnbr_base
*/

int my_compute_power_it(int nb, int p);
int my_strlen(char const *str);

int my_getnbr_base(char const *str, char const *base)
{
    int n_base = my_strlen(base);
    int n_str = my_strlen(str);
    int resu = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; base [j] != '\0'; j++) {
            if (str[i] == base[j])
                resu = resu + (j * my_compute_power_it(n_base, n_str - i - 1));
        }
    }
    return resu;
}