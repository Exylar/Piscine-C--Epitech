/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (s1[n - 1] != s2[n - 1])
        return s1[n - 1] - s2[n - 1];
    else
        return 0;
}