/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** my_print_combn
*/

void print_digits(int n, int global_counter, int lastcount)
{
    int counter = 0;

    for (int i = 0; i < n-global_counter; i++) {
        my_putchar(counter+48);
        counter++;
    }
    int test = lastcount;
    for (int j = 0; j < global_counter; j++) {
        if (lastcount > 9) {
            break;
        }
        my_putchar(lastcount+48);
        lastcount++;
    }
    global_counter++;
    counter = 0;
    my_putchar(' ');
}

int my_print_combn(int n)
{
    int global_counter = 1;
    int lastcount = n - 1;

    while (global_counter <= n) {
        while (lastcount <= 9) {
            print_digits(n, global_counter, lastcount);
            lastcount++;
        }
        global_counter++;
        lastcount = n - global_counter + 1;
    }
}