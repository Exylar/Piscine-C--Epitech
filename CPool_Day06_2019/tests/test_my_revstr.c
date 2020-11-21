/*
** EPITECH PROJECT, 2019
** CPool_Day06_ 2019
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);
int my_strlen(char const *str);

Test(my_revstr, ok)
{
    char dest[6] = "Salut";
    my_revstr(dest);
    cr_assert_str_eq(dest, "tulaS");
}

Test(my_revstr, error)
{
    char dest2[6] = "Salut";
    my_revstr(dest2);
    cr_assert_str_neq(dest2, "tula");
}