##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compiles and creates binary
##

CC		=		g++

NAME	=		clicker

SRC_PATH	= 	src/
CLASS_PATH	=	$(SRC_PATH)class/

SRC		+=		$(SRC_PATH)main.cpp						\

OBJ		=		$(SRC:.cpp=.o)

FLAGS 	=		-g3 -g

CFLAGS	+=		-I./include -std=c++11 -Wall -Wextra -Werror -pedantic

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all