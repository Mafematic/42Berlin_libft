/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fszendzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:09:29 by fszendzi          #+#    #+#             */
/*   Updated: 2023/05/17 15:09:31 by fszendzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

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
*/

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

/*
int main(void)
{
	char str[] = "Hello";
	char *final;
	final = ft_strdup(str);
	printf("%s\n", final);
}
*/