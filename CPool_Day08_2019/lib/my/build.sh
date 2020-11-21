#!/bin/bash

gcc -c my_*.c
ar rc libmy.a my_*.o
rm -rf my_*.o