CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

LIBFT = ./libft/libft.a 

SRCS =	main.c \
	utils.c \
	swap.c \
	rotate.c \
	rev_rotate.c\
	push.c\
	sort.c\
	verific.c
      

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)
		

%o:%c
	$(CC) $(CFLAGS) -c $<

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJ)

fclean: clean
		$(MAKE) fclean -C ./libft
		rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
