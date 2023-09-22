#include <stdio.h>
//Rafael A.,Keven J.,Carlos G.
int main(){
	int vetpar[12]={0,0,0,0,0,0,0,0,0,0,0,0},vetimpar[12]={0,0,0,0,0,0,0,0,0,0,0,0},vet[12]={0,0,0,0,0,0,0,0,0,0,0,0},i=0;
	
	printf("Insira doze numero inteiros: \n");
	
	for(i=0;i<12;i++){
		scanf("%d",&vet[i]);
		if(vet[i]%2==0){
			vetpar[i] = vet[i];
		}else if(vet[i]%2!=0){
			vetimpar[i] = vet[i];
		}
	}
	printf("\nO vetor dos numeros pares se iguala a: \n");
	for(i=0;i<12;i++){
		if (vetpar[i]==0){
			printf("");
		}else{
		printf("%d\n",vetpar[i]);
	}
	}
	printf("\nO vetor dos numeros impares se iguala a: \n");
	for(i=0;i<12;i++){
		if (vetimpar[i]==0){
			printf("");
		}else{
		printf("%d\n",vetimpar[i]);
	}
	}
	return 0;
}
