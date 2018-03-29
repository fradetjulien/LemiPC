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

# define HEIGHT_MAP	10
# define WIDTH_MAP	10

typedef struct	s_players
{
	key_t	key;
	int	sem_id;
	int	shm_id;
	int	team_id;
	char	*player_name;
	int	abscissa;
	int	orderly;
}		t_players;

int		**set_map(t_players *p);
int		parser(int ac, char **av);
int		set_all(char **av);
int		create_semaphores(t_players *p);
int		players_on_map(t_players *p, int **map);
void		flag_help(char **av);
t_players	*create_players(char **av);

#endif /* !LEMIPC_H_ */
