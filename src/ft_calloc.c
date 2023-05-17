/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fszendzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:59:05 by fszendzi          #+#    #+#             */
/*   Updated: 2023/05/17 14:59:08 by fszendzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*void *ft_memset(void *ptr, int value, size_t num)
{
	unsigned char *p = ptr;
	size_t i = 0;
	while (i < num)
	{
		p[i] = (unsigned char) value;
		i++;
	}
	return (ptr);
}
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, size * nmemb);
	return (ptr);
}
