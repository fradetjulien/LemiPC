/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** set_all.c
*/

#include "lemipc.h"
#include <unistd.h>

int			**set_all(char **av, t_players *p)
{
	int		**map;

	p = create_players(av);
	if (p == NULL)
		return (NULL);
	map = set_map(p);
	if (map == NULL)
		return (NULL);
	create_semaphores(p);
	players_on_map(p, map);
	my_showtab(map);
	return (map);
}
