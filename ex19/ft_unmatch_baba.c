
int		ft_contains_pair(int *tab, int length, int elem)
{
	int idx;
	int count;

	idx = 0;
	count = 0;
	while (idx < length)
	{
		if (tab[idx] == elem)
			count++;
		if (count >= 2)
			return (1);
		idx++;
	}
	return (0);
}

int		ft_unmatch(int *tab, int length)
{
	int idx;

	idx = 0;
	while (idx < length)
	{
		if (!ft_contains_pair(tab, length, tab[idx]))
			return (tab[idx]);
		idx++;
	}
	return (0);
}
