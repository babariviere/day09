#include <stdlib.h>

int		ft_strlen(char *str) {
	int len;

	len = 0; while (str[len])
		len++;
	return (len);
}

int		ft_compute_size(char **tab, int sep_len)
{
	int idx;
	int size;

	size = 0;
	idx = 0;
	while (tab[idx])
	{
		size += ft_strlen(tab[idx]);
		if (tab[idx + 1])
			size += sep_len;
		idx++;
	}
	return (size);
}

void	ft_strcat(char *dest, char *src)
{
	int didx;
	int sidx;
	
	if (src[0] == 0)
		return ;
	didx = ft_strlen(dest);
	sidx = 0;
	while (src[sidx] != 0)
	{
		dest[didx] = src[sidx];
		didx++;
		sidx++;
	}
	dest[didx] = 0;
}

char	*ft_join(char **tab, char *sep)
{
	int		size;
	int		idx;
	char	*dest;

	if (tab[0] == 0)
		return (0);
	size = ft_compute_size(tab, ft_strlen(sep));
	dest = malloc(size + 1);
	dest[0] = 0;
	idx = 0;
	while (tab[idx + 1])
	{
		ft_strcat(dest, tab[idx]);
		ft_strcat(dest, sep);
		idx++;
	}
	ft_strcat(dest, tab[idx]);
	return (dest);
}
