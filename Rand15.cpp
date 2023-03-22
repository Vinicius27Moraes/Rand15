#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	int z,x,y,apresenta[16],solic,indice;
	
	
	
	for(x=0;x<15;x++){
	apresenta[x]=rand()%9999999;
		for(y=0;y<x;y++){
			if(apresenta[y]==apresenta[x]){
			apresenta[x]=rand()%9999999;
			}		
			}
	printf("%i=%i\n",x+1,apresenta[x]);
	}
	
	printf("Informe uma valor: \n");
	scanf("%i",&solic);
	fflush(stdin);
	
	for(z=0;z<15;z++){
		if(solic==apresenta[x]){
			indice=x;
			printf("Valor encontrado no indice: %i\n",x);
		}else printf("Valor nao localizado\n");
	}
	
	
	
	
	printf("\n\n\n");
	system("pause");
	return 0;
}