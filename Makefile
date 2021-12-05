NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putadd.c ft_putchar.c ft_puthex.c ft_putnbr_u.c ft_putnbr.c ft_putstr.c
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar -rc $@ $(OBJS)

all : $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
