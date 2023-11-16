#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

int main() {
	
	setlocale(LC_ALL,"");

	float raio;
	
	printf("\n Informe o raio do circulo: ");
	scanf("%f", &raio);
	printf("\n Valor da Área:%.2f", pi *pow(raio,2));
	printf("\n Valor do perímetro: %.2f", 2 * pi * raio);
	
	return (0);
}