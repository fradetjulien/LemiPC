/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** move_player.c
*/

#include "lemipc.h"

int		**move_player(int **map, t_players *p)
{
	int	player = 0;
	int	move = 0;

	player = map[p->abscissa][p->orderly];
	map[p->abscissa][p->orderly] = 0;
	srand(time(NULL));
	move = rand() % 4;
	if (move == 0) {
		map = shifting_zero(map, p, player);
	}
	else if (move == 1) {
		map = shifting_one(map, p, player);
	}
	else if (move == 2) {
		map = shifting_two(map, p, player);
	}
	else if (move == 3) {
		map = shifting_three(map, p, player);
	}
	return (map);
}
