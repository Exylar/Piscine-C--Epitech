/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_comb2
*/

int print_digit(int a, int b)
{
    for ( int i = 0; i < 10; i++) {
        for ( int j = 0;  j < 10; j++) {
            if ( (10 * a + b) < (10 * i + j ) ) {
                my_putchar(48 + a);
                my_putchar(48 + b);
                my_putchar(' ');
                my_putchar(48 + i);
                my_putchar(48 + j);
                if ( (a * 1000 + b * 100 + i * 10 + j) != 9899) {
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
}

int my_print_comb2(void)
{
    for ( int counter_a = 0; counter_a < 10; counter_a++) {
        for ( int counter_b = 0; counter_b < 10; counter_b++) {
            print_digit(counter_a, counter_b);
        }
    }
}