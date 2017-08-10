#include <stdio.h>

int		ft_format_hour(int hour)
{
	hour = hour % 12;
	if (hour == 0)
		hour = 12;
	return (hour);
}

char	ft_am_or_pm(int hour)
{
	hour = hour % 24;
	if (hour <= 11)
		return ('A');
	else
		return ('P');
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.\n",
			ft_format_hour(hour),
			ft_am_or_pm(hour),
			ft_format_hour(hour + 1),
			ft_am_or_pm(hour + 1));
}
