/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** flag_help.c
*/

#include <stdio.h>

void		flag_help(char **av)
{
	printf("USAGE\n\t%s PATH TEAM_NUMBER\n\n"
	       "DESCRIPTION\n\tPATH\tpath you'll give to ftok\n"
	       "\tTEAM_NUMBER\tteam number of the current champion "
	       "(greater than 0)\n", av[0]);
}
