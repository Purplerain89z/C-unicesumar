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
	switch(op){
		case 1:
			resultado = num1 + num2;
			printf("A soma dos numeros %1.f e %1.5f é de %1.f\n",num1, num2, resultado );
			break;
		case 2:
			resultado = num1 - num2;
			printf("A subtração dos numeros %1.f e %1.f é de %1.f\n",num1, num2, resultado);
			break;
		case 3:
			resultado = num1 / num2;
			printf("A divisão dos numeros %1.f e %1.f é de %1.f\n", num1, num2, resultado);
			break;
		case 4:
			resultado = num1 * num2;
			printf("A multiplicação dos numeros %1.f e %1.f é %1.f\n", num1, num2,resultado);	
			break;
		default:
			printf("Opção invalida");
			break;		
				
	}
	return(0);
}