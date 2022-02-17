#ifndef __T_TIMETABLE__
#define __T_TIMETABLE__

#include "t_time.h"

/*
### TYPEDEF DA LISTA ###
*/

typedef struct {
	t_time * key;
	char * value;
} t_timetable_item;

typedef struct {
	t_timetable_item * table;
	int size, n;
} t_timetable;


/*
### CRIAÇÃO DA LISTA ###
*/

t_timetable * t_timetable_init(int size);



/*
### INSERÇÃO NA LISTA ###
*/

void t_timetable_put(t_timetable * timetable, t_time * key, char * value);



/*
### CONSULTA NA LISTA ###
*/

char * t_timetable_get(t_timetable * timetable, t_time * key);



/*
### FUNÇÕES AUXILIARES ###
*/

t_time * t_timetable_min(t_timetable * timetable);

t_time * t_timetable_max(t_timetable * timetable);

t_time * t_timetable_floor(t_timetable * timetable, t_time * key);

t_time * t_timetable_ceiling(t_timetable * timetable, t_time * key);



/*
### IMPRIME A LISTA ###
*/

void t_timetable_print(t_timetable * timetable);



#endif
