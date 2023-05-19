/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fszendzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:06:11 by fszendzi          #+#    #+#             */
/*   Updated: 2023/05/17 15:06:13 by fszendzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static void	num_zero(char **arr)
{
	*arr = (char *)malloc(sizeof(char) * 2);
	(*arr)[0] = '0';
	(*arr)[1] = '\0';
}

static long	ft_itoa_helper(char **arr, int *count, long num)
{
	long	temp;
	int		is_neg;

	temp = num;
	if (num < 0)
	{
		is_neg = 1;
		temp *= -1;
		num *= -1;
		(*count)++;
	}
	while (temp != 0)
	{
		(*count)++;
		temp /= 10;
	}
	*arr = (char *)malloc((*count + 1) * sizeof(char));
	if (is_neg)
		(*arr)[0] = '-';
	return (num);
}

char	*ft_itoa(int n)
{
	int		count;
	long	num;
	char	*arr;
	int		i;

	count = 0;
	num = n;
	if (num == 0)
	{
		num_zero(&arr);
		return (arr);
	}
	num = ft_itoa_helper(&arr, &count, num);
	i = count - 1;
	while (num != 0)
	{
		arr[i--] = num % 10 + '0';
		num /= 10;
	}
	arr[count] = '\0';
	return (arr);
}

/*
int main(void)
{
	int n = -2147483648;
	char *str; 
    str = ft_itoa(n); 

    printf("%s\n", str); 
    return 0; 
}
*/