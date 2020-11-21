/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** swap_endian_color
*/


int swap_endian_color(int color)
{
    char *memoir;
    union endian_color {
        int x;
        char y[4];
    };
    union endian_color my_endian_color;

    my_endian_color.x = color;
    memoir = my_endian_color.y[3];
    my_endian_color.y[3] = my_endian_color.y[0];
    my_endian_color.y[0] = memoir;
    memoir = my_endian_color.y[2];
    my_endian_color.y[2] = my_endian_color.y[1];
    my_endian_color.y[1] = memoir;
    color = my_endian_color.x;
    return color;
}