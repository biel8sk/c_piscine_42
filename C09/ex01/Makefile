NAME		= libft.a
CC			= cc
CFLAGS		= -Wextra -Wall -Werror -I./includes

SRCS_DIR	= srcs/

SRCS_FILES	= ft_putchar.c \
			  ft_strcmp.c \
			  ft_swap.c \
			  ft_putstr.c \
			  ft_strlen.c 

SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS		= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

%.o:	%.c 
	$(CC) -c $< -o $@

clean:
	rm -f $(SRCS_DIR)*.o

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
