#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	float num1, num2, resultado;
	int op;
	
	printf("Digite o primeiro número:\n");
	scanf("%f", &num1);
	printf("digite o segundo número\n");
	scanf("%f", &num2);
	printf("Escolha o operação:\n1 - SOMA\n2 - Subtração\n3 - Divisão\n4- multiplicação\n");
	scanf("%d",&op);
	
	if (op == 1){
		resultado = num1 + num2;
		printf("A soma dos numeros %.2f e %.2f é %.2f\n",num1, num2, resultado);
	}
	else {
		if(op == 2){
		resultado = num1 - num2;
		printf("A Subtração dos numeros %.2f e %.2f é %.2f\n", num1, num2, resultado);
	}
		else{
			if (op == 3){
				resultado = num1 / num2;
				printf("A divisão dos numeros %.2f e %1.f é %.2f\n",num1, num2, resultado);
			}
			else{ 
				if (op == 4){
					resultado = num1 * num2;
					printf ("A divisão dos numeros %.2f e %.2f é %.2f\n", num1,num2,resultado);				
				}
				else{
					printf("Opção invalida.");
				}
			}
		}
	}
		
	return(0);
}