/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** create_players.c
*/

#include "lemipc.h"

t_players		*init_players(t_players *p, char **av)
{
	p->player_name = strdup(av[1]);
	if (p->player_name == NULL) {
		return (NULL);
	}
	p->team_id = atoi(av[2]);
	p->key = ftok(av[1], 0);
	if (p->key == -1) {
		return (NULL);
	}
	return (p);
}

t_players	*create_players(char **av, t_players *p)
{
	p = malloc(sizeof(t_players));
	if (p == NULL)
		return (NULL);
	p = init_players(p, av);
	if (p == NULL)
		return (NULL);
	return (p);
}
