/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** tree
*/

void foot(int size,int n_space)
{
    int is_pair = 0;

    if (size % 2 == 0) {
        is_pair = 1;
    }
    for (int i = 0; i < size; i++) {
        for (int i = 0; i < n_space; i++)
            my_putchar(' ');
        for (int j = 0; j < size + is_pair; j++) {
            my_putchar('|');
        }
        my_putchar('\n');
    }
}

int nb_space(int size)
{
    int n = 0;
    int decale = 0;

    for (int i = 0; i < size; i++) {
        n = n + (i + 4) - decale;
        if (decale == 0)
            decale++;
        if (i % 2 == 0)
            decale++;
    }
    return (n - 1);
}

int leaves(int *datatab, int counter, int n, int n_space)
{
    if (counter == 0) {
        datatab[0]--;
        datatab[1]++;
        counter = 4 + datatab[1];
        n = n - datatab[2] * 2 - 2;
        n_space = n_space + datatab[2] + 1;
        if (datatab[1] % 2 == 0) {
            datatab[2]++;
        }
        if (datatab[0] == 0)
            return 0;
    }
    if (counter > 0) {
        for (int i = 0; i < n_space; i++)
            my_putchar(' ');
        for (int i = 0; i < n; i++)
            my_putchar('*');
        my_putchar('\n');
        return leaves(datatab, counter - 1, n + 2, n_space - 1);
    }
}

void tree(int size)
{
    int datatab[3];

    if (size > 0) {
        datatab[0] = size;
        datatab[1] = 0;
        datatab[2] = 1;
        leaves(datatab, 4, 1, nb_space(size));
        foot(size, nb_space(size) - size / 2);
    }
}