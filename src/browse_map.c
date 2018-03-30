/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** browse_map.c
*/

#include "lemipc.h"

int		**browse_map(int **map)
{
	int	abscissa = 0;
	int	orderly = 0;

	while (abscissa < HEIGHT_MAP) {
		while (abscissa < HEIGHT_MAP && orderly < WIDTH_MAP) {
			if (map[abscissa][orderly] > 0) {
				map = move_player(map, abscissa, orderly);
				abscissa++;
				orderly++;
			}
			orderly++;
		}
		orderly = 0;
		abscissa++;
	}
	return (map);
}
