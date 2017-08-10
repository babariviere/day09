#include <unistd.h>

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

void	ft_to_lowercase(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
	{
		if ('A' <= str[idx] && str[idx] <= 'Z')
			str[idx] += 32;
		idx++;
	}
}

int		ft_find_str(char *str, char *to_find)
{
	int idx;
	int sub_idx;

	idx = 0;
	ft_to_lowercase(str);
	while (str[idx] && ft_is_space(str[idx]))
		idx++;
	sub_idx = 0;
	while (str[idx] && to_find[sub_idx])
	{
		if (str[idx] != to_find[sub_idx])
			return (0);
		idx++;
		sub_idx++;
	}
	if (to_find[sub_idx])
		return (0);
	while (str[idx])
	{
		if (!ft_is_space(str[idx]))
			return (0);
		idx++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int idx;

	idx = 1;
	if (argc <= 1)
		return (0);
	while (idx < argc)
	{
		if (ft_find_str(argv[idx], "president") || ft_find_str(argv[idx], "attack") ||
				ft_find_str(argv[idx], "powers"))
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
		idx++;
	}
	return (0);
}
