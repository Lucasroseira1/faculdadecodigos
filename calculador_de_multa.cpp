//limite de peixes (50 quilos)
//peso, multa, excesso.
//equação = peso

#include<stdio.h>

double peso, multa, excesso;

int main(){
	printf("Digite o peso de peixe pescado:\n");
	scanf("%lf", &peso);
	
	excesso = (peso-50);
	
	if(excesso>0){
		multa = excesso*4;
		printf("O valor da multa e de R$%.2lf", multa);
	}
	else{
		printf("peso valido, nao deve pagar multa");
	}
	
	return 0;
}
