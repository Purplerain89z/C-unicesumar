#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL,"");

	int num, raiz, quad;
	
	printf("informe um numero: ");
	scanf("%d", &num);
	if (num >= 0){
		
		quad = pow(num , 2);
		raiz = sqrt(num);
		printf("O quadrado do numero %d é %d e a raiz quadrada é %d.", num, quad,raiz);
	}
	else{
		printf("O numero informado não é positivo.");
	}
	
	return (0);
}