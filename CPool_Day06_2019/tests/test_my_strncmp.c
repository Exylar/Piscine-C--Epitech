/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_strncmp
*/

#include <criterion/criterion.h>

int my_strlen(char const *str);
int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, ok)
{
    char const s3[10] = "Thomzs";
    char const s4[10] = "Thomas";
    cr_assert_eq(my_strncmp(s3, s4, 5), 25);
}

Test(my_strncmp, ok1)
{
    char const s3[10] = "Thomas";
    char const s4[10] = "Thomas";
    cr_assert_eq(my_strncmp(s3, s4, 5), 0);
}

Test(my_strncmp, ok2)
{
    char const s3[10] = "Thomas";
    char const s4[10] = "Thomzs";
    cr_assert_eq(my_strncmp(s3, s4, 5), -25);
}

Test(my_strncmp, error)
{
    char const s3[10] = "Thomas";
    char const s4[10] = "Thomas";
    cr_assert_neq(my_strncmp(s3, s4, 5), -25);
}