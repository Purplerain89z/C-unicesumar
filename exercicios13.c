#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
		
	setlocale(LC_ALL,"");
	
	int A , B, soma, sub, mult, divis;
	printf("Digite um valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("A soma dos valores: %d.\nA Subtração do valor é %d.\nA multiplicação dos valores é: %d\nA Divisão dos valores é: %d", soma, sub, mult, divis);	
	
	return (0);
}