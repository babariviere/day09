unsigned int	ft_collatz_recursive(unsigned int base, unsigned int n)
{
	if (base == 1)
		return (n);
	if (base % 2 == 0)
		return (ft_collatz_recursive(base / 2, n + 1));
	else
		return (ft_collatz_recursive(base * 3 + 1, n + 1));
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	return (ft_collatz_recursive(base, 0));
}
