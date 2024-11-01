##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## ok
##

SRC	=	main.c	\
		lib.c	\
		lib2.c	\
		flag_n.c	\
		flag_p.c	\
		error.c

NAME	=	palindrome

all:
	gcc	-o	$(NAME)	$(SRC)	-g3

clean:
	rm	-f	*#

fclean:	clean
	rm	-f	$(NAME)

re:	fclean all
