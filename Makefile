CC=gcc
CFLAGS=-I. -I./src -I../Unity/src

LIB_SOURCES=src/ft_isprint.c
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



# # CC=gcc
# # CFLAGS=-I. -I./src -I../Unity/src

# # # Specify the source and test files explicitly
# # LIB_SOURCES=src/ft_isprint.c
# # TEST_SOURCES=Tests/test_ft_isprint.c

# # # Build the library
# # library: $(LIB_SOURCES)
# # 	$(CC) $(CFLAGS) -o my_library $(LIB_SOURCES)

# # # Build the test runner
# # test: $(TEST_SOURCES) src/ft_isprint.c ../Unity/src/unity.c Tests/test_runner.c
# # 	$(CC) $(CFLAGS) -o test_runner $(TEST_SOURCES) src/ft_isprint.c ../Unity/src/unity.c Tests/test_runner.c

# # # Clean up build artifacts
# # clean:
# # 	rm -f my_library test_runner 