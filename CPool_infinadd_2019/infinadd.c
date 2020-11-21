/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** infinadd
*/

#include "include/my.h"
#include <stdlib.h>

void get_retenu(char *result, char *s1, char *s2, int retenu)
{
    if (s2[0] == '-' && s1[0] == '-')
        retenu == 1 ? result[1] = '1' : 1;
    else
        retenu == 1 ? result[0] = '1' : 1;
}

void add_number(char *result, char *s1, char *s2)
{
    int l1 = my_strlen(s1);
    int l2 = my_strlen(s2);
    int counter = l1;
    int retenu = 0;
    int is_neg = s1[0] == '-' ? 0 : 1;

    for (int i = 1; i <= l2 && s2[l2 - i] != '-'; i++) {
        result[counter] = ( (((s1[l1 - i] - '0') + (s2[l2 - i]) - '0' +
                retenu) % 10) + '0');
        if ((((s1[l1 - i] - '0') + (s2[l2 - i]) + retenu) - '0') >= 10)
            retenu = 1;
        else
            retenu = 0;
        counter--;
    }
    for (int j = l1 - l2 - is_neg; j >= 0 && s1[j] != '-'; j--) {
        result[counter] = ((((s1[j] - '0') + retenu) % 10) + '0');
        retenu = ((s1[j] - '0') + retenu) >= 10 ? 1 : 0;
        counter--;
    }
    get_retenu(result, s1, s2, retenu);
}

void remove_useless(char *result)
{
    result = my_revstr(result);
    if (result[my_strlen(result) - 1] == '0')
        result[my_strlen(result) - 1] = '\0';
    result = my_revstr(result);

    result = my_revstr(result);
    if (result[my_strlen(result) - 2] == '0' &&
        result[my_strlen(result) - 1] == '-' ) {
        result[my_strlen(result) - 2] = '-';
        result[my_strlen(result) - 1] = '\0';
    }
    result = my_revstr(result);
}

void infinadd(int argc, char *s1, char *s2)
{
    char *result;

    if (s1[0] == '-' && s2[0] == '-') {
        result = malloc(sizeof(char) * my_strlen(s1) + 3);
        result[1] = '0';
        result[0] = '-';
        result[my_strlen(s1) + 1] = '\0';
        add_number(result, s1, s2);
    }
    else {
        result = malloc(sizeof(char) * my_strlen(s1) + 2);
        result[0] = '0';
        result[my_strlen(s1) + 1] = '\0';
        add_number(result, s1, s2);
    }
    remove_useless(result);
    my_showstr(result);
    free(result);
}

int main(int argc, char **argv)
{
    if (argc != 3)
        return 0;
    if (!(my_str_isnum_or_neg(argv[1])) || !(my_str_isnum_or_neg(argv[2])))
        return 0;
    if (my_strlen(argv[1]) > my_strlen(argv[2]))
        infinadd(argc, argv[1], argv[2]);
    else
        infinadd(argc, argv[2], argv[1]);
}