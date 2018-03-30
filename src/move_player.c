/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** move_player.c
*/

#include "lemipc.h"
#include <time.h>
#include <stdlib.h>

int		**move_player(int **map, int abscissa, int orderly)
{
	void	(*ptrf[6])(int **, int, int, int);
	char	*possibility = "012345";
	int	player = 0;
	int	move = 0;
	int	i = -1;

	player = map[abscissa][orderly];
	map[abscissa][orderly] = 0;
	srand(time(NULL));
	move = rand() % 6;
	ptrf[0] = &shifting_zero;
	ptrf[1] = &shifting_one;
	ptrf[2] = &shifting_two;
	ptrf[3] = &shifting_three;
	ptrf[4] = &shifting_four;
	ptrf[5] = &shifting_five;
	while(possibility[++i] != move && possibility[i]);
	if (move == possibility[i])
		ptrf[i](map, abscissa, orderly, player);
	return (map);
}
