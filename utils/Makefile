NAME = libftprintf.a
SRCS_LIBFT = ft_isalpha.c ft_strjoin.c ft_toupper.c ft_striteri.c\
ft_isascii.c ft_strlcat.c ft_memcmp.c ft_putchar_fd.c\
ft_strnstr.c ft_strlcpy.c\
ft_isdigit.c ft_strlen.c ft_itoa.c ft_putstr_fd.c ft_atoi.c\
ft_putendl_fd.c ft_strdup.c ft_strchr.c ft_strmapi.c\
ft_isalnum.c ft_strncmp.c\
ft_calloc.c ft_bzero.c ft_memchr.c ft_memset.c\
ft_strrchr.c ft_memcpy.c ft_memmove.c ft_tolower.c\
ft_split.c ft_putnbr_fd.c ft_strtrim.c\
ft_substr.c ft_isprint.c

SRCS_LIBFT_B = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c\
ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c\
ft_lstnew_bonus.c ft_lstsize_bonus.c

PRINTF = ft_printf.c ft_print_char.c ft_print_int.c ft_print_hex.c ft_print_ptr.c

CC = cc
CFLAGS = -Werror -Wextra -Wall


OBJS_LIBFT = $(LIBFT:.c=.o)
OBJS_LIBFT_B = $(LIBFT_B:.c=.o)
OBJS_PRINTF = $(PRINTF:.c=.o)
RM = rm -f
AR = ar rcs

LIBFT = $(addprefix libft/, $(SRCS_LIBFT))
LIBFT_B = $(addprefix libft/, $(SRCS_LIBFT_B))

all: $(NAME)

clean:
	$(RM) $(OBJS_LIBFT) $(OBJS_LIBFT_B) $(OBJS_PRINTF)

fclean: clean
	$(RM) $(NAME)

$(NAME):  $(OBJS_LIBFT) $(OBJS_LIBFT_B) $(OBJS_PRINTF)
	$(AR) $(NAME) $(OBJS_LIBFT) $(OBJS_LIBFT_B) $(OBJS_PRINTF)

re: fclean all

bonus: all
