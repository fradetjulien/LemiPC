/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** lemipc.h
*/

#ifndef LEMIPC_H_
# define LEMIPC_H_

#include <sys/types.h>
#include <sys/ipc.h>

typedef struct	s_players
{
	key_t	key;
	int	team_id;
	char	*player_name;
}		t_players;


int	parser(int ac, char **av);
int	create_players(char **av);
void	flag_help(char **av);

#endif /* !LEMIPC_H_ */
