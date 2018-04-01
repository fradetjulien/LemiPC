/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** end.c
*/

#include "lemipc.h"
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <stdio.h>
#include <stdlib.h>

void		end(t_players *p)
{
	shmctl(p->shm_id, IPC_RMID, NULL);
	semctl(p->sem_id, 0, IPC_RMID, 0);
	printf("Team %s wins the game\n", p->player_name);
	free(p->player_name);
	free(p);
}