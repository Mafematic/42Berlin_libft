/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fszendzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:08:59 by fszendzi          #+#    #+#             */
/*   Updated: 2023/05/17 15:09:02 by fszendzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(const char *s)
{
	size_t len;
	char *cpy;
	size_t i;

	len = ft_strlen(s);
	cpy = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	str_len;

	if (!s)
        return NULL;
	str_len = ft_strlen(s);
	if (start > str_len)
        return ft_strdup("");
	sub = (char *)malloc(sizeof(char) * len +1);
	if (!sub)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
*/

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	word_count;
	char	**words;

	if (!s || !*s)
		return (NULL);
	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			word_count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			words[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}

/*
int main(void)
{
	char str[] = ",,,Hello,this,is,a,test,,,"; 
	char c = ',';

	char **final; 
	final = ft_split(str, c);

	int i = 0; 
	while (final[i] != NULL)
	{
		printf("%s\n", final[i]);
		i++; 
	}
	return 0; 
}
*/