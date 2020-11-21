/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_strcapitalize
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);

Test(my_strcapitalize, ok)
{
    char str[] = "hey, how are you? 42WORds";
    cr_assert_str_eq(my_strcapitalize(str), "Hey, How Are You? 42words");
}

Test(my_strcapitalize, ok2)
{
    char str[] = "Thomas aime leS licorneS";
    cr_assert_str_eq(my_strcapitalize(str), "Thomas Aime Les Licornes");
}