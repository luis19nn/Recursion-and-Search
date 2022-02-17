#ifndef __T_TIME__
#define __T_TIME__

/*
### TYPEDEF DA LISTA ###
*/

typedef struct {
	short int h, m, s;
} t_time;


/*
### CRIAÇÃO E LIBERAÇÃO DA LISTA ###
*/

t_time * t_time_init(short int h, short int m, short int s);

void t_time_free(t_time * time);



/*
### FUNÇÕES AUXILIARES ###
*/

int t_time_cmp(t_time * timeA, t_time * timeB);



/*
### INFORMAÇÕES DA LISTA ###
*/

int t_time_get_h(t_time * time);

int t_time_get_m(t_time * time);

int t_time_get_s(t_time * time);



#endif
