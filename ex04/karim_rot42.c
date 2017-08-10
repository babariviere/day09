
char	*ft_rot42(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		if ( (str[i] > 64 && str[i] < 75) || (str[i] > 96 && str[i] < 107) )
			str[i] = str[i] + 16;
		else if ( (str[i] > 74 && str[i] < 91) || (str[i] > 106 && str[i] < 123))
			str[i] = str[i] - 10;
		i++;
	}
	return (str);
}
