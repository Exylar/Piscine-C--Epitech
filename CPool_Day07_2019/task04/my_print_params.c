/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_print_params
*/

char my_putchar(char c);
int my_putstr(char const *str);

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}