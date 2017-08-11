#include <stdio.h>

char	*ft_join(char **tab, char *sep);

int main()
{
	char *tab[] = {"Hello", "World", "Testing", "ft_join", 0};
	char *result = ft_join(tab, "; ");
	printf("%s\n", result);
}
