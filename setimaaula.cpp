 #include<stdio.h>
 
 float n1, n2, med;
 
 int main(){

  printf("Digite a nota n1\n");
  scanf("%f", &n1);
  
  printf("Digite a nota n2\n");
  scanf("%f", &n2);
 	
    med=(n1+n2)/2;
    
    if(med>=7 && med<=10){
    	printf("Voce esta aprovado\n");
	}
	else if(med>=3 && med<7){
		printf("Voce esta de exame\n");
	}
	else{
		printf("Voce esta reprovado");
}
	return 0;
 }
