#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL,"");
	
	float base1, base2, altura, area;
	
	printf("informe a primeira base maior do trapezio: \n");
	scanf("%f", &base1);
	printf("informe a base menor do trapezio: \n");
	scanf("%f", &base2);
	printf("informe a altura do trapezio: \n");
	scanf("%f", &altura);
	area =  (base1 + base2) * altura / 2 ;
	printf("A area do trapezio é %.2f.", area);
	return (0);
}