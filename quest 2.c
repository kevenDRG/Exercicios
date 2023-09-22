#include <stdio.h>
#include <stdlib.h>

//Rafael A.,Keven J.,Carlos G.

int main(){
	int vetor[5],i,maior=0;
	
	printf("informe os 5 valores inteiros do vetor\n");
	
	//Pegando os numeros e separando o maior
	for(i = 0;i < 5;i++){
		scanf("%d",&vetor[i]);
		
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	printf("\n");
	
	//Mostrando o maior elemento
	printf("O maior elemento: %d",maior);
	
	return 0;
}
