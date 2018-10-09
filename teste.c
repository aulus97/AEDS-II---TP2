#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	unsigned int *v = (unsigned int *)malloc(10000001*sizeof(unsigned int));
	unsigned int *k = (unsigned int *)malloc(10000001*sizeof(unsigned int));
	if(v == NULL)
		printf("erro no malloc!\n");
	if(v == NULL)
		printf("erro no malloc!\n");
	for(i=1;i<=10000000;i++)
		v[i] = k[i] = i;
	for(i=1;i<=10000000;i++)
		printf("%lu ",v[i]);
	printf("\n");
	for(i=1;i<=10000000;i++)
		printf("%lu ",k[i]);
	free(v);
	free(k);
	return 0;
}
