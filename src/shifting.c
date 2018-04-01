/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** shifting.c
*/

#include "lemipc.h"

void		shifting_zero(int ***map, int abscissa, int orderly, int player)
{
	if (orderly < WIDTH_MAP &&
	    (*map)[abscissa][orderly] == 0) {
		orderly++;
	}
	(*map)[abscissa][orderly] = player;
}

void		shifting_one(int ***map, int abscissa, int orderly, int player)
{
	if (abscissa < (HEIGHT_MAP - 1)) {
		abscissa++;
	}
	(*map)[abscissa][orderly] = player;
}

void		shifting_two(int ***map, int abscissa, int orderly, int player)
{
	if (orderly > 0) {
		orderly--;
	}
	(*map)[abscissa][orderly] = player;
}
