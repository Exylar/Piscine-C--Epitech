/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_revalpha
*/

int my_print_revalpha(void)
{
    char letter = 'z';

    for (letter ; letter >= 'a'; letter--) {
        my_putchar(letter);
    }
    return 0;
}
