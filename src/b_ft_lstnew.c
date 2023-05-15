#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;


t_list *ft_lstnew(void *content) 
{
    t_list *new = (t_list*)malloc(sizeof(t_list));
    if (new == NULL)
    {
        return NULL; 
    }
    new->content = content;
    new->next = NULL; 
    return new;  
}

int main()
{
    int arr[] = {3, 5, 7, 10, 15};
    t_list *node = ft_lstnew(&arr[0]);
    printf("%d\n", *(int*)node->content);

    return 0;
}