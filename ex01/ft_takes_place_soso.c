void	ft_takes_place(int hour)
{
	if (hour == 12)
		printf("THE FLOOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 24 || hour == 0)
		printf("THE FLOOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("THE FLOOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 A.M.\n");
	else if (hour == 23)
		printf("THE FLOOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 P.M.\n");
	else if (hour < 12)
		printf("THE FLOOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n",
	hour, hour + 1);
	else if (hour > 12)
		printf("THE FLOOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n",
	hour % 12, (hour + 1) % 12);
}
