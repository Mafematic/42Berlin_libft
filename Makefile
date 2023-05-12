CC=gcc
CFLAGS=-I. -I./src -I../Unity/src -DUNITY_INCLUDE_DOUBLE

LIB_SOURCES=src/ft_isprint.c src/ft_atoi.c src/ft_bzero.c src/ft_isascii.c src/ft_isdigit.c \
			src/ft_isalnum.c src/ft_isalpha.c src/ft_memchr.c src/ft_memcpy.c src/ft_memset.c \
			src/ft_strchr.c src/ft_strlcat.c src/ft_strlcpy.c src/ft_strlen.c src/ft_calloc.c \
			src/ft_memcmp.c src/ft_memmove.c src/ft_strncmp.c src/ft_strnstr.c src/ft_strrchr.c \
			src/ft_tolower.c src/ft_toupper.c src/ft_putstr_fd.c src/ft_putchar_fd.c src/ft_putendl_fd.c \
			src/ft_putnbr_fd.c src/ft_itoa.c 
#LIB_SOURCES=$(wildcard src/*.c)
LIB_OBJECTS=$(LIB_SOURCES:.c=.o)
LIBRARY=libft.a

TEST_SOURCES=$(wildcard tests/*.c)
TEST_OBJECTS=$(TEST_SOURCES:.c=.o)
TEST_RUNNER=test_runner

.PHONY: all clean fclean re

all: $(LIBRARY) $(TEST_RUNNER)

$(LIBRARY): $(LIB_OBJECTS)
	ar -rcs $@ $^

$(LIB_OBJECTS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TEST_RUNNER): $(TEST_OBJECTS) $(LIBRARY)
	$(CC) $(CFLAGS) -o $@ $^ ../Unity/src/unity.c

$(TEST_OBJECTS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(TEST_RUNNER)
	./$(TEST_RUNNER)

clean:
	$(RM) $(LIB_OBJECTS) $(TEST_OBJECTS)

fclean: clean
	$(RM) $(LIBRARY) $(TEST_RUNNER)

re: fclean all

