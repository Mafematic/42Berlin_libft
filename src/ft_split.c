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

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strtrim_char(char const *s1, char c)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*trimmed;

	len = ft_strlen(s1);
	i = 0;
	j = 0;
	while (c == s1[i])
	{
		i++;
	}
	while (c == s1[len - 1])
	{
		len--;
	}
	trimmed = (char *)malloc(sizeof(char) * (len - i) + 1);
	if (!trimmed)
	{
		return (NULL);
	}
	while (i < len)
	{
		trimmed[j] = s1[i];
		j++;
		i++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}

char	**ft_split(char const *s, char c)
{
	char	*final;
	int		i;
	int		j;
	int		m;
	int		count;
	char	*word;
	char	**words;
	int		n;

	final = ft_strtrim_char(s, c);
	i = 0;
	count = 1;
	while (final[i] != '\0')
	{
		if (final[i] == c)
		{
			count++;
		}
		i++;
	}
	words = (char **)malloc(sizeof(char *) * count + 1);
	n = 0;
	i = 0;
	j = 0;
	while (n < count)
	{
		while (final[i] != '\0')
		{
			if (final[i] == c)
			{
				i++;
				break ;
			}
			i++;
		}
		word = (char *)malloc(sizeof(char) * i + 1);
		m = 0;
		while (final[j] != '\0')
		{
			if (final[j] == c)
			{
				j++;
				break ;
			}
			word[m] = final[j];
			m++;
			j++;
		}
		word[m] = '\0';
		words[n] = word;
		n++;
	}
	words[n] = NULL;
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