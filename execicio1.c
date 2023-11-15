#include <stdio.h>

int main(){
	
	int idade = 0;
	int ano = 0;
		
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	printf("Qual ano você nasceu:\n");
	scanf("%d",&ano);
	
	printf("idade informada:%d o ano informado é %d\n", idade,ano);
};