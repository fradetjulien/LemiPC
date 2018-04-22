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
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/msg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

# define HEIGHT_MAP	10
# define WIDTH_MAP	10

typedef struct	s_msg
{
	long	mtype;
	char	mtext[2];
}		t_msg;

typedef struct	s_players
{
	char	*player_name;
	int	sem_id;
	int	shm_id;
	int	msg_id;
	int	team_id;
	int	abscissa;
	int	orderly;
	int	order;
	key_t	key;
}		t_players;

int		**set_map(t_players *p);
int		**set_all(char **av, t_players *p);
int		**move_player(int **map, t_players *p);
int		**browse_map(int **map, t_players *p);
int		**shifting_zero(int **map, t_players *p, int player);
int		**shifting_one(int **map, t_players *p, int player);
int		**shifting_two(int **map, t_players *p, int player);
int		**shifting_three(int **map, t_players *p, int player);
int		parser(int ac, char **av);
int		players_on_map(t_players *p, int **map);
int		launch_game(int **map, t_players *p);
int		lock(int sem_id);
int		unlock(int sem_id);
void		create_semaphores(t_players *p);
void		init_messageQ(t_players *p);
void		flag_help(char **av);
void		my_showtab(int **map);
void		end(t_players *p);
t_players	*create_players(char **av, t_players *p);

#endif /* !LEMIPC_H_ */
