##
## EPITECH PROJECT, 2020
## B-MUL-100-LYN-1-1-myhunter-mathieu.bobillier
## File description:
## Makefile
##

SRC		=		my_runner.c			\
				my_strlen.c			\
				window/displayer.c	\
				infogame/infogame.c \
				sprite.c			\
				animation.c			\

OBJ		=		$(SRC:.c=.o)

CFLAGS = 		-I./Include

NAME 	=		my_runner

$(NAME):		$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) -g3 -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	$(NAME)

clean:
		rm -f $(OBJ)
		rm -f *~

fclean: clean
		rm -f $(NAME)

re:		fclean all
