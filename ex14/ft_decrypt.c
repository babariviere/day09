#include "ft_perso.h"
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

int			ft_read_age(char *str, int *gidx) {
	int age;
	
	age = ft_atoi(str);
	while (str[*gidx] && str[*gidx] != '|')
		(*gidx)++;
	if (str[*gidx] == '|')
		(*gidx)++;
	return (age);
}

char		*ft_read_name(char *str, int *gidx)
{
	char	*name;
	int		len;
	int		idx;

	len = 0;
	idx = *gidx;
	while (str[idx] && str[idx] != ';')
	{
		len++;
		idx++;
	}
	name = malloc(sizeof(char) * (len + 1));
	idx = 0;
	while (idx < len)
		name[idx++] = str[(*gidx)++];
	name[idx] = 0;
	if (str[*gidx] == ';')
		(*gidx)++;
	return (name);
}

t_perso		**ft_decrypt(char *str)
{
	int		count;
	int		idx;
	int		gidx;
	t_perso	**persos;

	count = 1;
	idx = 0;
	while (str[idx])
	{
		if (str[idx] == ';')
			count++;
		idx++;
	}
	persos = malloc(sizeof(t_perso *) * (count + 1));
	idx = 0;
	while (idx < count)
	{
		persos[idx] = malloc(sizeof(t_perso));
		persos[idx]->age = ft_read_age(str, &gidx);
		persos[idx]->name = ft_read_name(str, &gidx);
		idx++;
	}
	persos[idx] = 0;
	return (persos);
}
