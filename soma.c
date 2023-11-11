#include <stdio.h>
#include <stdlib.h>
#include "soma_biblio.h"

int main(){
	int n1;
	int n2;
	int res;

	res=1;
	
	printf("Calculadora de Soma\n");
	while(res==1){
	printf("Digite o 1º numero: ");
	scanf("%d",&n1);
	printf("Digite o 2º numero: ");
	scanf("%d",&n2);
	soma(n1,n2);
	printf("Deseja continuar? 1-Sim 2-Não \n");
	scanf("%d",&res);
	}
	printf("Adeus....\n");
	}

