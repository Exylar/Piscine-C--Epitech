##
## EPITECH PROJECT, 2019
## CPool_Day13_2019
## File description:
## Makefile
##

SRC	=	infinadd.c

OBJ	=	$(SRC:.c=.o)

NAME	=	infin_add

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc -o $(NAME) $(SRC) -I./include -L./lib -lmy

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
