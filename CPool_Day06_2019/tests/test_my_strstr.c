/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>
#include <stddef.h>

char *my_strstr(char *str, char const *to_find);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);

Test(my_strstr, ok)
{
    char str[30] = "Bonjour je suis Thomas ddddddd";
    char const to_find[8] = "Thomas";
    cr_assert_str_eq(my_strstr(str, to_find), "Thomas ddddddd");
}

Test(my_strstr, ok_with_start)
{
    char str[40] = "Bonjour Thomos, je suis Thomas ddddddd";
    char const to_find[8] = "Thomas";
    cr_assert_str_eq(my_strstr(str, to_find), "Thomas ddddddd");
}

Test(my_strstr, error)
{
    char str[30] = "Bonjour je suis Thomas ddddddd";
    char const to_find[8] = "Thomas";
    cr_assert_str_neq(my_strstr(str, to_find), " Thomas ddddddd");
}

Test(my_strstr, error_null)
{
    char str[30] = "Bonjour je suis Fhomas ddddddd";
    char const to_find[8] = "Thomas";
    cr_assert_null(my_strstr(str, to_find));
}