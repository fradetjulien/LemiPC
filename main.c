/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** main.c
*/

#include <sys/types.h>
#include <sys/ipc.h>
#include <unistd.h>
#include "lemipc.h"

int			main(int ac, char **av)
{
	int		**map = NULL;
	t_players	*p = NULL;

	if (parser(ac, av) == -1) {
		flag_help(av);
	}
	map = set_all(av, p);
	if (map == NULL) {
		return (-1);
	}
	return (0);
}
