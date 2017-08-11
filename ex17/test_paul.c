int ft_max(int *tab, int length)
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

int main()
{
	int tab[5];
	int length;

	length = 5;
	tab[4] = 129;
	tab[3] = 3;
	tab[2] = -2;
	tab[1] = 1290;
	tab[0] = 0;
	printf("%i", ft_max(tab, length));
	return(0);
}
