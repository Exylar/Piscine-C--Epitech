##
## EPITECH PROJECT, 2019
## CPool_Day13_2019
## File description:
## Makefile
##

SRC	=	btree_create_node.c	\
		btree_apply_prefix.c	\
		btree_apply_infix.c	\
		btree_apply_suffix.c	\
		btree_insert_data.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libbtree.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
