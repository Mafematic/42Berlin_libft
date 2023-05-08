#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

int ft_atoi(const char *nptr);
void ft_bzero(void *ptr, size_t num);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(char c);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *destination, const void *source, size_t num);
void *ft_memset(void *ptr, int value, size_t num);
char *ft_strchr(const char *s, int c);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);


#endif /* LIBFT_H */
