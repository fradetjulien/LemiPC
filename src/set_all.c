/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** set_all.c
*/

#include "lemipc.h"

int			**set_all(char **av, t_players *p)
{
	int		**map;

	p = create_players(av, p);
	if (p == NULL)
		return (NULL);
	create_semaphores(p);
	init_messageQ(p);
	map = set_map(p);
	if (map == NULL)
		return (NULL);
	players_on_map(p, map);
	if (launch_game(map, p) == -1) {
		return (NULL);
	}
	return (map);
}
