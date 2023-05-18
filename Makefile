NAME = libft.a
SOURCES = src/ft_atoi.c src/ft_bzero.c src/ft_isascii.c src/ft_isdigit.c src/ft_isprint.c \
	src/ft_isalnum.c src/ft_isalpha.c src/ft_memchr.c src/ft_memcpy.c src/ft_memset.c \
	src/ft_strchr.c src/ft_strlcat.c src/ft_strlcpy.c src/ft_strlen.c src/ft_calloc.c \
	src/ft_memcmp.c src/ft_memmove.c src/ft_strncmp.c src/ft_strnstr.c src/ft_strrchr.c \
	src/ft_tolower.c src/ft_toupper.c src/ft_putstr_fd.c src/ft_putchar_fd.c src/ft_putendl_fd.c \
	src/ft_putnbr_fd.c src/ft_itoa.c src/ft_strmapi.c src/ft_striteri.c src/ft_substr.c src/ft_split.c \
	src/ft_strdup.c src/ft_strjoin.c src/ft_strtrim.c 
BSOURCES = \
	src/b_ft_lstnew.c src/b_ft_lstadd_front.c src/b_ft_lstsize.c src/b_ft_lstlast.c src/b_ft_lstadd_back.c \
	src/b_ft_lstdelone.c src/b_ft_lstclear.c src/b_ft_lstiter.c src/b_ft_lstmap.c
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -I./src -DUNITY_INCLUDE_DOUBLE 
LDFLAGS = -L/usr/local/lib # Add the library path if necessary
LDLIBS = -lbsd # Add the library name

TEST_SOURCES = $(wildcard tests/*.c)
TEST_OBJECTS = $(TEST_SOURCES:.c=.o)
TEST_RUNNER = test_runner

$(TEST_RUNNER): $(TEST_OBJECTS) $(NAME)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ ../Unity/src/unity.c $(LDLIBS)

all: $(NAME) $(TEST_RUNNER)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

bonus: $(OBJECTS) $(BOBJECTS)
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(BOBJECTS) $(TEST_OBJECTS) $(TEST_RUNNER)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(TEST_RUNNER)
	./$(TEST_RUNNER)

.PHONY: all bonus clean fclean re test
