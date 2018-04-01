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

/*	ptrf[0] = &shifting_zero;
	ptrf[1] = &shifting_one;
	ptrf[2] = &shifting_two;
	ptrf[3] = &shifting_three;
	ptrf[4] = &shifting_four;
	ptrf[5] = &shifting_five;
	while(possibility[++i] != move && possibility[i]);
	if (move == possibility[i])
	ptrf[i](&map, abscissa, orderly, player);*/
