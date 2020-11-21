/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_revstr
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int strlen = my_strlen(str);
    char new_str[strlen];

    for (int i = strlen -1 ; i >= 0; i--)
        new_str[strlen - i - 1] = str[i];
    new_str[strlen] = '\0';
    for (int j = 0; j < strlen; j++)
        str[j] = new_str[j];
    return str;
}