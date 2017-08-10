char *ft_rot42(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'j') || (str[a] >= 'A' && str[a] <= 'J'))
		{
			str[a] = str[a] + 16;
			a++;
		}
		else if ((str[a] >= 'k' && str[a] <= 'z') || (str[a] >= 'K' && str[a] <= 'Z'))
		{
			str[a] = str[a] - 10;
			a++;
		}
		else
			a++;
	}
	return (str);
}
