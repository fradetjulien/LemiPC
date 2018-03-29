/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** launch_game.c
*/

#include "lemipc.h"

int		**delete_position(int **map, t_players *p)
{
	if (map[p->abscissa][p->orderly] == p->sem_id) {
		map[p->abscissa][p->orderly] = 0;
	}
	return (map);
}

int		alive_players(int **map)
{
	int	abscissa = 0;
	int	orderly = 0;
	int	nb_players = 0;

	while (map[abscissa]) {
		while (map[abscissa][orderly]) {
			if (map[abscissa][orderly] != 0) {
				nb_players++;
			}
			orderly++;
		}
		orderly = 0;
		abscissa++;
	}
	return (nb_players);
}

int		launch_game(int **map, t_players *p)
{
	int	time = 0;
	int	nb_players = 1;

	while (time <= 60 && nb_players > 0) {
		nb_players = alive_players(map);
		map = delete_position(map, p);
		map = move_player(map, p);
	}
	return (0);
}
