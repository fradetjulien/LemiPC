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
	p->key = ftok(av[0], 0);
	return (0);
}

int			create_players(char **av)
{
	t_players	*p;

	p = malloc(sizeof(t_players));
	if (p == NULL)
		return (-1);
	if (init_players(p, av) != 0)
		return (-1);
	return (0);
}
