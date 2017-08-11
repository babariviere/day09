/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeantet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:53:21 by pjeantet          #+#    #+#             */
/*   Updated: 2017/08/11 10:59:32 by pjeantet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_max(int *tab, int length)
{
	int i;
	int m;

	m = 0;
	i = 0;
	while (i < length)
	{
		if (tab[i] > tab[m])
			m = i;
		i++;
	}
	return (tab[m]);
}

int main()
{
	int tab[5];
	int length;

	length = 5;
	tab[4] = 129;
	tab[3] = 3;
	tab[2] = -2;
	tab[1] = 1290;
	tab[0] = 0;
	printf("%i", ft_max(tab, length));
	return(0);
}
