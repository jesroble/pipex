NAME = pipex

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_PATH = ../libft
PRINTF_PATH = ../printf
LIBFT = $(LIBFT_PATH)/libft.a
PRINTF = $(PRINTF_PATH)/libftprintf.a

SRCS =	pipex.c\
		childs.c\
		close.c\

OBJS = $(SRCS:%.c=%.o)


all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH) all

$(PRINTF):
	make -C $(PRINTF_PATH) all

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_PATH) clean
	make -C $(PRINTF_PATH) clean
fclean:
	rm -f $(NAME) $(LIBFT) $(PRINTF) $(OBJS)
	rm -f *.txt
	make -C $(LIBFT_PATH) fclean
	make -C $(PRINTF_PATH) fclean

re: fclean all