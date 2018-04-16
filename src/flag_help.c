/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** flag_help.c
*/

#include <stdio.h>

void		flag_help(char **av)
{
	printf("USAGE\n\t%s PATH TEAM_NUMBER\n\n", av[0]);
	printf("DESCRIPTION\n\tPATH\tpath you'll give to ftok\n");
	printf("\tTEAM_NUMBER\tteam number of the current champion ");
	printf("(greater than 0)\n");
}
