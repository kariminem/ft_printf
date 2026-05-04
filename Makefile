CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbr_base.c \
		ft_putstr.c \
		ft_strlen.c
OBJ = $(SRCS:.c=.o)
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all