/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_str_islower
*/

#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, ok)
{
    char const str[] = "salut";
    cr_assert_eq(my_str_islower(str), 1);
}

Test(my_str_islower, error)
{
    char const str2[] = "saluT";
    cr_assert_eq(my_str_islower(str2), 0);
}

Test(my_str_islower, ok2)
{
    char const str3[] = "salut";
    cr_assert_neq(my_str_islower(str3), 0);
}

Test(my_str_islower, error2)
{
    char const str4[] = "saluT";
    cr_assert_neq(my_str_islower(str4), 1);
}