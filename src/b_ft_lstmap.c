#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    void* content; 
    struct s_list *next;
} t_list; 

t_list* create_lst(int *arr, int n)
{
    t_list *first, *t, *last; 
    first = (t_list*)malloc(sizeof(t_list));
    first->content = malloc(sizeof(int));
    *(int*)first->content = arr[0];
    first->next = NULL; 
    last = first; 

    int i = 1; 
    while (i < n)
    {
        t = (t_list*)malloc(sizeof(t_list));
        t->content = malloc(sizeof(int));
        *(int*)t->content = arr[i];
        t->next = NULL; 
        last->next = NULL; 
        last = t; 
        i++; 
    }
    return first; 
}

void **multiplicate_by_two(void* content)
{
    if (content != NULL)
    {
        *(int *)content *= 2;
    }
    return content; 
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    while (lst != NULL)
    {
        f(lst->content); 
        lst = lst->next; 
    }
}

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