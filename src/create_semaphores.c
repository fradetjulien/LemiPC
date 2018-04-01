/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** create_semaphores.c
*/

#include "lemipc.h"

int		create_semaphores(t_players *p)
{
	p->sem_id = semget(p->key, 1, SHM_R | SHM_W);
	if (p->sem_id == -1) {
		p->sem_id = semget(p->key, 1, SHM_R | SHM_W | IPC_CREAT);
		semctl(p->sem_id, 0, SETVAL, 1);
	}
	else {
		semctl(p->sem_id, 0, IPC_RMID);
		p->sem_id = semget(p->key, 1, IPC_CREAT | SHM_R | SHM_W);
	}
	srand(time(NULL));
	p->abscissa = rand() % HEIGHT_MAP;
	p->orderly = rand() % WIDTH_MAP;
	return (0);
}
