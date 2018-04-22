/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** move_player.c
*/

#include "lemipc.h"

void		send_position(t_players *p, char *pos)
{
	t_msg	msg;

	msg.mtype = 2;
	msg.mtext[0] = pos[0];
	msg.mtext[1] = pos[1];
	msgsnd(p->msg_id, &msg, sizeof(t_msg), 0);
}

char		*search_ennemy(t_players *p)
{
	t_msg	msg;
	int	msg_rcd = 0;
	char	*coordonnees = malloc(2);

	if (coordonnees == NULL) {
		return (NULL);
	}
	msg_rcd = msgrcv(p->msg_id, &msg, sizeof(msg), p->team_id, IPC_NOWAIT);
	if (msg_rcd == -1) {
		coordonnees[0] = msg.mtext[0];
		coordonnees[1] = msg.mtext[1];
	}
	return (coordonnees);
}

int		**move_player(int **map, t_players *p)
{
	int	player = 0;
	int	move = 0;

	player = map[p->abscissa][p->orderly];
	map[p->abscissa][p->orderly] = 0;
	srand(time(NULL));
	move = rand() % 4;
	if (move == 0) {
		map = shifting_zero(map, p, player);
	}
	else if (move == 1) {
		map = shifting_one(map, p, player);
	}
	else if (move == 2) {
		map = shifting_two(map, p, player);
	}
	else if (move == 3) {
		map = shifting_three(map, p, player);
	}
	return (map);
}
