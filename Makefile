##
## EPITECH PROJECT, 2018
## lemipc
## File description:
## Makefile
##

CC	= gcc

RM	= rm -f

CFLAGS	= -g -W -Wall -Wextra -pthread

CFLAGS  += -I include/

NAME	= lemipc

SRCS	= src/flag_help.c	\
          src/parser.c		\
	  src/create_players.c	\
          main.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
