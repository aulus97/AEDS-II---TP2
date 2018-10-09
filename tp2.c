#include <stdio.h>
#include <stdlib.h>
#include "tp2.h"

int main(int argc, char *argv[]){
	//Inicializaçoes//
	FILE *input;
	FILE *output;
	int c,n,i=1;

	if(argc == 3){
		input = fopen(argv[1],"r");
			if(input == NULL){
				printf("Erro na abertura do arquivo input\n");
				system("pause");
				exit(1);
			}
			else{
				//Pego o valor da primeira linha e defino o tam do vetor//
				fscanf(input,"%d",&n);
				int *v = malloc(n*sizeof(int));

				while((fscanf(input,"%d",&c)) != EOF){
						v[i] = c;
						i++;
				}
				fclose(input);
				
				//Quicksort//
				QuickSort(&n,v);

			output = fopen(argv[2],"w");
				if(output == NULL){
					printf("Erro na abertura do arquivo output\n");
					system("pause");
					exit(1);
				}
				else{
					//escrevo o primeiro valor!
					fprintf(output,"%d",v[1]);
					
					//escrevo os proximos valores com espaco!
					for(i = 2; i<n+1; i++){
						fprintf(output," %d",v[i]);
					}

					fclose(output);
				}				
			}
	}	
	return 0;
}