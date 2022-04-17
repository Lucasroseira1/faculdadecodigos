//calcular e mostrar a quantidade de litros gastos (carro faz 12KM/L)
//tempo gasto (horas); velocidade media (KM/h)
//distancia=tempo*velocidademedia

#include <stdio.h>

float tempo, velocidademedia, litros;

int main(){
	printf("\nQual o tempo gasto na viagem?\n");
	scanf("%f", &tempo);
	
	printf("\nQual a velocidade media?\n");
	scanf("%f", &velocidademedia);
	
	litros = (tempo*velocidademedia)/9.8;
	
	printf("\nVoce gastou %.3fL", litros);

	return 0;
}

  
