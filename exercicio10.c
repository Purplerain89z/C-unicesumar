#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL,"");

	char nome[50];
	
	printf("Qual seu nome? \n");
	scanf("%s", &nome);
	printf("Bem vindo(a) à disciplina de Algoritimos e lógica de programação II, %s.", nome);
	return (0);
}