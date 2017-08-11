#include "ft_perso.h"
#include <stdio.h>
#include <stdlib.h>

t_perso		**ft_decrypt(char *str);

int main()
{
	t_perso **p = ft_decrypt("18|Bastien;28|Karim;17|Sofiane");
	int idx;

	idx = 0;
	while (p[idx])
	{
		printf("Name: %s, Age: %d\n", p[idx]->name, p[idx]->age);
		free(p[idx]);
		idx++;
	}
}
