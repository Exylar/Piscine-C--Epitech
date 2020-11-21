/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_rev_params
*/

char my_putchar(char c);
int my_putstr(char const *str);

int main(int argc, char **argv)
{
    for (int i = argc - 1; i >= 0; i--) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}