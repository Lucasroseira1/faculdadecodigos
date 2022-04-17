#include<stdio.h>
#include<math.h>

//Produto = multiplicação
//Diferença = subtração
//Quociente = divisão

//elevado = pow(x, num)
//ao quadrado = sqrt(x)
int m, f;
float altura, pesoideal;

int main(){
	printf("Qual a sua altura?\n");
	scanf("%f", &altura);
	
	printf("Qual seu genero?\n");
	scanf("%d%d", &m, &f);
	
	if(m){
		pesoideal =(72.7*altura)-58;
		
	}
	else{
		pesoideal =(62.1*altura)-44.7;
	}
	printf("o seu peso ideal e %.2f", pesoideal);
	return 0;
}




