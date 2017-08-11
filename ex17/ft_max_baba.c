
int		ft_max(int *tab, int length)
{
	int idx;
	int max;

	if (length <= 0)
		return (0);
	idx = 0;
	max = tab[0];
	while (idx < length)
	{
		if (tab[idx] > max)
			max = tab[idx];
		idx++;
	}
	return (max);
}
