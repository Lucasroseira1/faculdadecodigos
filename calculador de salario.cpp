#include<stdio.h>
#include<locale.h>

float cfa,cfi;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o custo de F�brica\n");
	scanf("%f",&cfa);
	
	cfi=cfa+(cfa*0.28)+(cfa*0.45);
	
	printf("\nO pre�o final ser� de R$%.2f\n", cfi);
	
	return 0;
}
	

