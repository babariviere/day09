char *ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + 42) % 26 + 'A';
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + 42) % 26 + 'a';
		i++;
	}
	return (str);
}
