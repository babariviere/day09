char *ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = (str[i] - 'a' + 42) % 26 + 'a';
		i++;
	}
	return (str);
}

int main (void)
{
	char str[]="bonjour";
	printf("%s", ft_rot42(str));
	return (0);
}
