/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** get_color
*/

#include "include/my.h"

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    return ((red << 16) + (green << 8) + blue) ;
}