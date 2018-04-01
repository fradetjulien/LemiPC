/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** my_showtab.c
*/

#include "lemipc.h"

void		my_showtab(int **map)
{
	int	x = 0;
	int	y = 0;

	while (x != HEIGHT_MAP) {
		while (y != WIDTH_MAP) {
			printf("%d ", map[x][y]);
			y++;
		}
		printf("\n");
		y = 0;
		x++;
	}
}
