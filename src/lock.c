/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** lock.c
*/

#include "lemipc.h"
#include <sys/sem.h>

int			lock(int sem_id)
{
	struct sembuf	op;

	op.sem_num = 0;
	op.sem_flg = 0;
	op.sem_op = 1;
	return (semop(sem_id, &op, 1));
}
