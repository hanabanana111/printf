CC = cc
MAKE = make
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c \
   	   ft_treat_cs.c \
	   ft_treat_di.c \
	   ft_treat_phex.c \
	   ft_treat_u.c
OBJS = $(SRCS:%.c=%.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re