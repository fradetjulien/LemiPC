/*
** EPITECH PROJECT, 2018
** lemipc
** File description:
** set_map.c
*/

#include "lemipc.h"
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <stdlib.h>

int		**initialisation_map(void *map)
{
	int	**real_map = malloc(sizeof(int *) * (HEIGHT_MAP));
	int	abscissa = 0;
	int	orderly = 0;

	if (real_map == NULL)
		return (NULL);
	while (abscissa < WIDTH_MAP) {
		real_map[abscissa] = &((int *)map)[HEIGHT_MAP * abscissa];
		abscissa++;
	}
	abscissa = 0;
	while (abscissa < HEIGHT_MAP) {
		while (orderly < WIDTH_MAP) {
			real_map[abscissa][orderly] = 0;
			orderly++;
		}
		orderly = 0;
		abscissa++;
	}
	return (real_map);
}

int		**fillup_map(void *map)
{
	int	abscissa = 0;
	int	**real_map = malloc(sizeof(int *) * (HEIGHT_MAP));

	if (real_map == NULL)
		return (NULL);
	while (abscissa < WIDTH_MAP) {
		real_map[abscissa] = &((int *)map)[HEIGHT_MAP * abscissa];
		abscissa++;
	}
	return (real_map);
}

int		**set_map(t_players *p)
{
	void	*map;

	p->shm_id = shmget(p->key, (HEIGHT_MAP * WIDTH_MAP), SHM_R | SHM_W);
	if (p->shm_id == -1) {
		p->shm_id = shmget(p->key, (HEIGHT_MAP * WIDTH_MAP), IPC_CREAT |SHM_R | SHM_W);
		create_semaphores(p);
		map = shmat(p->shm_id, NULL, SHM_R | SHM_W);
		map = initialisation_map(map);
		if (map == NULL)
			return (NULL);
	}
	else {
		map = shmat(p->shm_id, NULL, SHM_R | SHM_W);
		map = fillup_map(map);
		if (map == NULL)
			return (NULL);
	}
	return (map);
}
