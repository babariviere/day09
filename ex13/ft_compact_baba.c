
int		ft_compact(char **tab, int length)
{
	int		idx;
	int		sub_idx;
	char	*ptr;

	idx = 0;
	ptr = *tab;
	while (idx < length)
	{
		if (ptr[idx] == 0)
		{
			sub_idx = idx + 1;
			while (sub_idx < length)
			{
				ptr[sub_idx - 1] = ptr[sub_idx];
				sub_idx++;
			}
			length--;
		}
		idx++;
	}
	tab[length - 1] = 0;
	return (length);
}
