#include <unistd.h>

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

void	ft_putnbr(int nbr)
{
	char decade;
	char unite;

	decade = nbr / 10 + '0';
	unite = nbr % 10 + '0';
	if (decade > '0')
		write(1, &decade, 1);
	write(1, &unite, 1);
}

void	ft_takes_place(int hour)
{
	char first_hour;
	char second_hour;

	first_hour = ft_am_or_pm(hour);
	second_hour = ft_am_or_pm(hour + 1);
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	ft_putnbr(ft_format_hour(hour));
	write(1, ".00 ", 4);
	write(1, &first_hour, 1);
	write(1, ".M. AND ", 8);
	ft_putnbr(ft_format_hour(hour + 1));
	write(1, ".00 ", 4);
	write(1, &second_hour, 1);
	write(1, ".M.\n", 4);
}
