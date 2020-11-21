/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** tree
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 0
#define STEP 1
#define N_DECAL 2

char random_char(void)
{
    char character = rand()%95+33;
    return character;
}

void spaces(int number)
{
    for (int i = 0; i < number; i++)
        my_putchar(' ');
}

void foot(int size,int n_space)
{
    int is_pair = 0;

    if (size % 2 == 0) {
        is_pair = 1;
    }
    for (int i = 0; i < size; i++) {
        spaces(n_space);
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
        datatab[SIZE]--;
        datatab[STEP]++;
        counter = 4 + datatab[STEP];
        n = n - datatab[N_DECAL] * 2 - 2;
        n_space = n_space + datatab[N_DECAL] + 1;
        if (datatab[STEP] % 2 == 0) {
            datatab[N_DECAL]++;
        }
        if (datatab[SIZE] == 0)
            return 0;
    }
    if (counter > 0) {
        spaces(n_space);
        for (int i = 0; i < n; i++)
            my_putchar(random_char());
        my_putchar('\n');
        return leaves(datatab, counter - 1, n + 2, n_space - 1);
    }
}

void tree(int size)
{
    int datatab[3];

    srand(time(NULL));
    if (size > 0) {
        while (1) {
            datatab[SIZE] = size;
            datatab[STEP] = 0;
            datatab[N_DECAL] = 1;
            fflush(stdout);
            printf("\[\e[0;33m");
            leaves(datatab, 4, 1, nb_space(size));
            foot(size, nb_space(size) - size / 2);
            sleep(1);
            printf("\E[H\E[2J");
        }
    }
}