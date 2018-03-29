/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** players_on_map.c
*/

#include "lemipc.h"
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int		is_free(t_players *p, int **map)
{
	if (map[p->abscissa][p->orderly] == 0) {
		map[p->abscissa][p->orderly] = p->sem_id;
		return (0);
	}
	return (-1);
}

int		players_on_map(t_players *p, int **map)
{
	if (is_free(p, map) == -1) {
		while (is_free(p, map) == -1) {
			srand(time(NULL));
			p->abscissa = rand() % HEIGHT_MAP;
			p->orderly = rand() % WIDTH_MAP;
		}
	}
	return (0);
}
