/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_comb
*/

void print_number(int i, int j)
{
    int k = 0;

    for (k = j+1; k <= 9; k++) {
        my_putchar(48+i);
        my_putchar(48+j);
        my_putchar(48+k);
        if ( i != 7) {
            my_putchar(',');
            my_putchar(' ');
        }
    }
}

int my_print_comb(void)
{
    int i = 0;
    int j = 0;

    for (i ; i <= 7 ; i++) {
        for (j = i+1 ; j <= 8; j++) {
            print_number(i,j);
        }
    }
    return 0;
}
