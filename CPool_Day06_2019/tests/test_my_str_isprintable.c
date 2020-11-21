/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_str_isprintable
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_islower, ok)
{
    char const str[] = "salut";
    cr_assert_eq(my_str_isprintable(str), 1);
}

Test(my_str_islower, error)
{
    char const str[] = "saluté";
    cr_assert_eq(my_str_isprintable(str), 0);
}

Test(my_str_islower, ok2)
{
    char const str[] = "salut";
    cr_assert_neq(my_str_isprintable(str), 0);
}

Test(my_str_islower, error2)
{
    char const str[] = "saluté";
    cr_assert_neq(my_str_isprintable(str), 1);
}