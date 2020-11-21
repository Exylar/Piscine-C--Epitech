/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_str_isalpha
*/

#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, ok)
{
    char const str[] = "salut";
    cr_assert_eq(my_str_isalpha(str), 1);
}

Test(my_str_isalpha, error)
{
    char const str2[] = "salu5t";
    cr_assert_eq(my_str_isalpha(str2), 0);
}

Test(my_str_isalpha, error2)
{
    char const str2[] = "salu5t";
    cr_assert_neq(my_str_isalpha(str2), 1);
}

Test(my_str_isalpha, ok2)
{
    char const str[] = "salut";
    cr_assert_neq(my_str_isalpha(str), 0);
}