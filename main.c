/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** main.c
*/

#include <sys/types.h>
#include <sys/ipc.h>
#include <unistd.h>
#include <stdio.h>
#include "lemipc.h"

void			my_showtab(int **map)
{
	int		x = 0;
	int		y = 0;

	while (map[x]) {
		while (map[x][y]) {
			printf("%d", map[x][y]);
			y++;
		}
		printf("\n");
		y = 0;
		x++;
	}
}

int			main(int ac, char **av)
{
	int		**map = NULL;
	t_players	p;

	if (parser(ac, av) == -1) {
		flag_help(av);
	}
	if (set_all(av, &p) == NULL) {
		return (-1);
	}
	if (launch_game(map, &p) == -1) {
		return (-1);
	}
	return (0);
}
