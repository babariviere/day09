
unsigned int	ft_active_bits(int value)
{
	unsigned int	count;
	int				idx;

	idx = 0;
	count = 0;
	while (value)
	{
		count += value & 1;
		idx++;
		value = value >> 1;
	}
	return (count);
}
