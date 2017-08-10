
int		ft_antidote(int i, int j, int k);

void	ft_testing(int i, int j, int k, int result)
{
	printf("Testing i=%d, j=%d, k=%d: ", i, j, k);
	if (ft_antidote(i, j, k) != result)
		printf("[ERROR] result should be: %d", result);
	else
		printf("[OK]");
}

int main()
{
	ft_testing(1, 2, 3, 2);
	ft_testing(1, 20, 7, 7);
	ft_testing(10, 20, 3, 10);
	ft_testing(5, 1, 19, 5);
	ft_testing(12, 13, 1, 12);
	ft_testing(18, 12, 1, 12);
	ft_testing(50, 1, 18, 18);
	ft_testing(17, 3, 100, 17);
	ft_testing(101, 102, 100, 101);
}
