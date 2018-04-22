/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** init_messageQ.c
*/

#include "lemipc.h"

void		init_messageQ(t_players *p)
{
	p->msg_id = msgget(p->key, SHM_R | SHM_W);
	if (p->msg_id == -1) {
		p->msg_id = msgget(p->key, IPC_CREAT | SHM_R | SHM_W);
		
	} else {
		msgctl(p->key, IPC_RMID, NULL);
		p->msg_id = msgget(p->key, IPC_CREAT | SHM_R | SHM_W);
	}
}
