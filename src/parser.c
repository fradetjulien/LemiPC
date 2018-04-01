/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** parser.c
*/

#include "lemipc.h"

int			is_num(char *number)
{
	int	i = 0;

	if (number == NULL)
		return (-1);
	while (number[i] != '\0') {
		if (number[i] < 48 ||
		    number[i] > 57)
			return (-1);
		i++;
	}
	return (0);
}

int			syntaxe(int ac, char **av)
{
	if (ac != 3 || is_num(av[2]) != 0)
		return (-1);
	return (0);
}

int			parser(int ac, char **av)
{
	struct stat	info;

	if (syntaxe(ac, av) != 0)
		return (-1);
	if (stat(av[1], &info) == -1)
		return (-1);
	if (!(info.st_mode & S_IXUSR))
		return (-1);
	return (0);
}
