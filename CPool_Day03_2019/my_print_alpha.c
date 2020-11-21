/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_alpha
*/

int my_print_alpha(void)
{
    char letter = 'a';

    for (letter; letter <= 'z'; letter++) {
        my_putchar(letter);
    }
    return 0;
}
