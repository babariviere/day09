#include <stdio.h>

int		ft_unmatch(int *tab, int length);

void	ft_print_tab(int *tab, int length)
{
	int idx;

	idx = 0;
	while (idx < length)
		printf("%d ", tab[idx++]);
}

void	ft_test(int *tab, int length, int result)
{
	int val = ft_unmatch(tab, length);
	printf("Testing ");
	ft_print_tab(tab, length);
	if (val == result)
		printf("[OK]\n");
	else
		printf("[ERR] your value: %d, real value: %d\n", val, result);
}

int main()
{
	int tab[] = {1, 1, 2, 3, 3, 4, 4};
	ft_test(tab, 7, 2);
	int tab2[] = {4, 1, 2, 3, 4, 2, 1};
	ft_test(tab2, 7, 3);
	int tab3[] = {2, 3, 4, 3, 4, 2, 1};
	ft_test(tab3, 7, 1);
}
