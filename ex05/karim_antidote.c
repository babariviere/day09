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

	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	if (tab[0] > tab[1])
		ft_swap(&tab[0], &tab[1]);
	if (tab[1] > tab[2])
		ft_swap(&tab[1], &tab[2]);
	if (tab[0] > tab[1])
		ft_swap(&tab[0], &tab[1]);
	return (tab[1]);
}
