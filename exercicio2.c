#include <stdio.h>
#include <locale.h>

#define texto "Nome idade e altura"

int main(){
	
	setlocale(LC_ALL, "");
	
	printf("%s\n", texto);
	
	int idade;
	float altura;
	char nome[50];
	
	printf("informe seu nome:\n");
	scanf("%s",&nome);
	
	printf("Informe sua idade:\n");
	scanf("%d",&idade);
	
	printf("informe sua altura:\n");
	scanf("%f",&altura);
	
	printf("Sua idade é %d sua altura é %.2f e seu nome é %s.\n", idade, altura, nome);
	
};