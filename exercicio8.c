#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL,"");
	
	float num1, num2, total;

	printf("Informe um numero:\n");
	scanf("%f", &num1);
	printf("Informe o segundo numero:\n");
	scanf("%f", &num2);
	
	total = pow (num1 ,num2);	
	printf("o numero %1.f elevado ao %1.f é %1.f.\n", num1, num2, total);
	return (0);
}