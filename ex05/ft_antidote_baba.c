void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_antidote(int i, int j, int k)
{
	int tab[3];
	int idx;
	int sub_idx;

	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	idx = 0;
	while (idx < 2)
	{
		sub_idx = idx + 1;
		while (sub_idx < 3)
		{
			if (tab[idx] > tab[sub_idx])
				ft_swap(&tab[idx], &tab[sub_idx]);
			sub_idx++;
		}
		idx++;
	}
	return (tab[1]);
}
