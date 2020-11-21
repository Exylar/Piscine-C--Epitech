/*
** EPITECH PROJECT, 2019
** CPool_Day12_2019
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "../include/my.h"

int main(int argc, char **argv)
{
    int fd;
    char buffer[30000];
    int size;
    char *cat;

    if (argc == 1)
        return 0;
    for (int i = 1; i < argc; i++) {
        fd = open(argv[i], O_RDONLY);
        if (fd == -1)
            return 0;
        size = read(fd, buffer, 30000);
        buffer[size] = "\0";
        if (size == 30000)
            return 0;
        else
            my_putstr(buffer);
        close(fd);
    }
}