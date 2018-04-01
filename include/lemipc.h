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
#include <stdio.h>

# define HEIGHT_MAP	20
# define WIDTH_MAP	20

typedef struct	s_players
{
	char	*player_name;
	int	sem_id;
	int	shm_id;
	int	team_id;
	int	abscissa;
	int	orderly;
	key_t	key;
}		t_players;

int		**set_map(t_players *p);
int		**set_all(char **av, t_players *p);
int		**move_player(int **map, int abscissa, int orderly);
int		**browse_map(int **map);
int		parser(int ac, char **av);
int		create_semaphores(t_players *p);
int		players_on_map(t_players *p, int **map);
int		launch_game(int **map, t_players *p);
int		lock(int sem_id);
int		unlock(int sem_id);
void		flag_help(char **av);
void		my_showtab(int **map);
void		shifting_zero(int **map, int abscissa, int orderly, int player);
void		shifting_one(int **map, int abscissa, int orderly, int player);
void		shifting_two(int **map, int abscissa, int orderly, int player);
void		shifting_three(int **map, int abscissa, int orderly, int player);
void		shifting_four(int **map, int abscissa, int orderly, int player);
void		shifting_five(int **map, int abscissa, int orderly, int player);
t_players	*create_players(char **av, t_players *p);

#endif /* !LEMIPC_H_ */
