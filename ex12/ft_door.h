
#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# define OPEN	0
# define CLOSE	1
# define TRUE	1

typedef struct	s_door
{
	int state;
}				t_door;

typedef int		t_bool;

void			open_door(t_door *door);
void			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);

#endif
