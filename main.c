/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** main.c
*/

#include <sys/types.h>
#include <sys/ipc.h>
#include "lemipc.h"

int		main(int ac, char **av)
{
	if (parser(ac, av) == -1) {
		flag_help(av);
	}
	if (create_players(av) == -1)
		return (-1);
	return (0);
}
