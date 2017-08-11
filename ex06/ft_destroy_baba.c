#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	free(**factory);
	**factory = 0;
	free(*factory);
	*factory = 0;
}
