##
## EPITECH PROJECT, 2019
## CPool_rush2_2019
## File description:
## Makefile
##

SRC	=	cat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ../lib/my
	gcc -W -Wall -Wextra -o $(NAME) $(OBJ) -L../lib -lmy

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
