/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strcapitalize
*/

char *my_strlowcase(char *str);
char *my_strupcase(char *str);

int is_low(char c)
{
    if (c >= 97 && c <= 122)
        return 1;
    return 0;
}

int is_up(char c)
{
    if (c >= 65 && c <= 90)
        return 1;
    return 0;
}

int detect_first_alpha_char(char *s, int i)
{
    if (is_up(s[i - 1]) == 0 && is_low(s[i - 1]) == 0 && is_low(s[i]) == 1) {
        return 1;
    }
    return 0;
}

void check_all_char(char *str, int i)
{
    if (is_up(str[i]) && i != 0)
        str[i] = str[i] + 32;
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    while(str[i] != '\0') {
        if (i == 0 && is_low(str[i]) == 1)
            str[i] = str[i] - 32;
        else if (detect_first_alpha_char(str, i) == 1)
            str[i] = str[i] - 32;
        else
            check_all_char(str, i);
        i++;
    }
    return str;
}