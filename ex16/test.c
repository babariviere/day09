#include <stdio.h>

unsigned int	ft_active_bits(int nb);

void	ft_test(int number, unsigned int result)
{
	unsigned int active = ft_active_bits(number);
	printf("Testing %d: ", number);
	if (active == result)
		printf("[OK]\n");
	else
		printf("[ERR] your value: %u, real value: %u", active, result);
}

int main()
{
	ft_test(0b11101110111, 9);
	ft_test(0b01001100111, 6);
	ft_test(0b11100000000, 3);
}
