#include <stdio.h>
#include <stdlib.h>
#include "tp2.h"

void particao(int Esq,int Dir,int *i, int *j, int vetor[]){ 
	int x, y;
	*i = Esq;	
	*j = Dir;	
	x = vetor[(((*i + *j)/2) + *i + *j)/3]; 	/* obtem o pivo x */	
	do
	{
		while (x > vetor[*i]) (*i)++;
		while (x < vetor[*j]) (*j)--;
		if ( (*i) <= (*j) ){
			y = vetor[*i];
			vetor[*i] = vetor[*j];
			vetor[*j] = y;
			(*i)++;
			(*j)--;
		}
	} 
	while ( (*i) <= (*j) );
}

void ordena(int Esq, int Dir, int vetor[]){	
	int i,j;	
	particao(Esq, Dir, &i, &j, vetor);
	if(Esq < j) 
		ordena(Esq,j,vetor);
	if (i < Dir)
		ordena(i, Dir, vetor);
}

void QuickSort(int *n, int *v){
	ordena(1, *n, v);
}