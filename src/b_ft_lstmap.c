/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_ft_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fszendzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:57:39 by fszendzi          #+#    #+#             */
/*   Updated: 2023/05/17 14:57:40 by fszendzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

t_list	*create_lst(int *arr, int n)
{
	t_list	*first;
	t_list	*t;
	t_list	*last;
	int		i;

	first = (t_list *)malloc(sizeof(t_list));
	first->content = malloc(sizeof(int));
	*(int *)first->content = arr[0];
	first->next = NULL;
	last = first;
	i = 1;
	while (i < n)
	{
		t = (t_list *)malloc(sizeof(t_list));
		t->content = malloc(sizeof(int));
		*(int *)t->content = arr[i];
		t->next = NULL;
		last->next = NULL;
		last = t;
		i++;
	}
	return (first);
}

void	**multiplicate_by_two(void *content)
{
	if (content != NULL)
	{
		*(int *)content *= 2;
	}
	return (content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int main(void)
{
    int arr[] = {1, 3, 4, 11, 121}; 
    int n = 5; 

    t_list *lst = create_lst(arr, n);

    while (lst != NULL)
    {
        printf("%d ", *(int*)lst->content);
        lst = lst->next; 
    }
    printf("\n"); 
    
    t_list *current = lst; 
    ft_lstmap(current, multiplicate_by_two, del); 
    while (current != NULL)
    {
        printf("%d ", *(int *)current->content);
        current = current->next;
    }
    printf("\n");
}
*/