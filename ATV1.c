#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int quantidadeIngressos = 0;
	
	printf("Digite a quatidade de ingressos\n");
	scanf("%d", &quantidadeIngressos);

	if (quantidadeIngressos <= 1000){
		printf("serão nescessarios 4 seguranças.");
	}else{
		if (quantidadeIngressos >1000 && quantidadeIngressos <= 5000){
			printf("serão nescessarios 6 seguranças.");
		}else{
			if (quantidadeIngressos > 5000 && quantidadeIngressos <=10000){
				printf("Serão nescessarios 10 seguranças.");
			}else{
				if (quantidadeIngressos >10000 && quantidadeIngressos <= 20000){
				printf("serão nescessarios 15 seguranças.");
				}else{
					if (quantidadeIngressos >20000 && quantidadeIngressos <= 50000){
						printf("serão nescessarios 25 seguranças.");
					}else{
						printf("Necessário aprovação especial");
						}
					}
				}
			}
		}
		return 0;
	}