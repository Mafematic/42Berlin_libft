/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fszendzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:12:25 by fszendzi          #+#    #+#             */
/*   Updated: 2023/05/17 15:12:28 by fszendzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	sub = (char *)malloc(sizeof(char) *len +1);

	if (!sub)
    {
        return NULL;
    }

	size_t i = 0;
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++; 
	}
	sub[i] = '\0';
	return sub; 
}

int main(void)
{
	char str[] = "This is a teststring";
	unsigned int start = 4;
	size_t len = 3;
	char *final;
	final = ft_substr(str, start, len); 
	printf("%s\n", final);
	free(final);
	return 0;
}
