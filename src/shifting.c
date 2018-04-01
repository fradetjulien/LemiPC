/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** shifting.c
*/

#include "lemipc.h"

int		**shifting_zero(int **map, t_players *p, int player)
{
	if (p->orderly < WIDTH_MAP &&
	    map[p->abscissa][p->orderly] == 0) {
		p->orderly++;
	}
	map[p->abscissa][p->orderly] = player;
	return (map);
}

int		**shifting_one(int **map, t_players *p, int player)
{
	if (p->abscissa < (HEIGHT_MAP - 1)) {
		p->abscissa++;
	}
	map[p->abscissa][p->orderly] = player;
	return (map);
}

int		**shifting_two(int **map, t_players *p, int player)
{
	if (p->orderly > 0) {
		p->orderly--;
	}
	map[p->abscissa][p->orderly] = player;
	return (map);
}

int		**shifting_three(int **map, t_players *p, int player)
{
        if (p->abscissa > 0) {
                p->abscissa--;
        }
        map[p->abscissa][p->orderly] = player;
	return (map);
}
