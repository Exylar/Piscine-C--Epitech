/*
** EPITECH PROJECT, 2019
** CPool_Day06_ 2019
** File description:
** test_my_strncpy
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, ok)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWord", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, error1)
{
    char dest[6] = {0};
    my_strncpy(dest, "HelloWord", 5);
    cr_assert_str_neq(dest, "HelloW");
}

Test(my_strncpy, error2)
{
    char dest[6] = {0};
    my_strncpy(dest, "HelloWord", 5);
    cr_assert_str_neq(dest, "Hell");
}