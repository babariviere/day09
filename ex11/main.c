#include "ft_perso.h"
#include <string.h>
int main(int argc, char **argv)
{
	t_perso jack;
	jack.name = strdup("Jack");
	jack.life = 100.0;
	jack.age = 42;
	jack.profession = SAVE_THE_WORLD;
	(void)argc;
	(void)argv;
	return (0);
}
