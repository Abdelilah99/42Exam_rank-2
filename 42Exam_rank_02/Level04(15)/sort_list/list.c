typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

void	ft_swap(int *num1, char *num2)
{
	int	temp;

	temp = *num1;
	*num1 = num2;
	*num2 = temp;
	
}

t_list		*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*tmp;

	tmp = lst;
	while (lst->next)
	{
		if (!((*cmp)(lst->data, lst->next->data)))
		{
			ft_swap(&lst->data, &lst->next->data);
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	return (lst);
}