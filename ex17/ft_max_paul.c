int		ft_max(int *tab, int length)
{
	int i;
	int m;

	m = 0;
	i = 0;
	if (length <= 0)
		return (0);
	while (i < length)
	{
		if (tab[i] > tab[m])
			m = i;
		i++;
	}
	return (tab[m]);
}
