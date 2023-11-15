#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"");
	
	float dep, juros, ren, total;
	
	printf("Quanto deseja depositar?\n");
	scanf("%f", &dep);
	printf("Informe a taxa de juros.\n");
	scanf("%f", &juros);
	ren = dep * (juros /100);
	total = dep + ren;
    printf("o total de rendimentos é %.2f.", ren);
	printf("Total de dinheiro na sua conta com os rendimentos é %.2f.\n", total);
	
	
	return (0);
}