int		ft_max(int *tab, int length);

void	ft_print_tab(int *tab, int length)
{
	int idx;

	idx = 0;
	while (idx < length)
		printf("%d ", tab[idx++]);
}

void	ft_test(int *tab, int length, int result)
{
	int max = ft_max(tab, length);
	printf("Testing ");
	ft_print_tab(tab, length);
	if (max == result)
		printf("[OK]\n");
	else
		printf("[ERR] your value: %d, real value: %d\n", max, result);
}

int main()
{
	int tab[4] = {10, 2, 5, 14};
	ft_test(tab, 4, 14);
	int tab2[10] = {10, 100, 12, 2, 1, 5, 14, 5, 9, 11};
	ft_test(tab2, 10, 100);
	int tab3[20] = {0, -1, 10, 40, 100, 12, 2, 1, 5, 14, 5, 9, 11, 1000, 1234, 45, 70, 89, 10, 1};
	ft_test(tab3, 20, 1234);
}
