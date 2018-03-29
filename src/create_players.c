/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** create_players.c
*/

#include "lemipc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int			init_players(t_players *p, char **av)
{
	p->player_name = malloc(sizeof(char) * (strlen(av[1]) + 1));
	if (p->player_name == NULL)
		return (-1);
	p->player_name = av[1];
	p->team_id = atoi(av[2]);
	p->key = ftok(av[1], 0);
	if (p->key == -1)
		return (-1);
	return (0);
}

t_players		*create_players(char **av)
{
	t_players	*p = NULL;

	p = malloc(sizeof(t_players));
	if (p == NULL)
		return (NULL);
	if (init_players(p, av) != 0)
		return (NULL);
	return (p);
}
