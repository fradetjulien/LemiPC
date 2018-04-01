/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** last_shifting.c
*/

#include "lemipc.h"

void		shifting_three(int ***map, int abscissa, int orderly, int player)
{
	if (abscissa > 0) {
		abscissa--;
	}
	(*map)[abscissa][orderly] = player;
}

void		shifting_four(int ***map, int abscissa, int orderly, int player)
{
 	if ((abscissa + 3) < HEIGHT_MAP) {
		abscissa = abscissa + 3;
	}
        (*map)[abscissa][orderly] = player;
}

void		shifting_five(int ***map, int abscissa, int orderly, int player)
{
        if ((orderly - 2) > 0) {
                orderly = orderly - 2;
        }
        (*map)[abscissa][orderly] = player;
}
