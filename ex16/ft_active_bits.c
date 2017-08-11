
unsigned int	ft_active_bits(int value)
{
	unsigned int	count;
	int				idx;

	idx = 0;
	count = 0;
	while (idx < 32)
	{
		if (value & 1)
			count++;
		idx++;
		value = value >> 1;
	}
	return (count);
}
