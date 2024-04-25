#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int num,ant,suc;
	
	printf("Digite um numero\n");
	scanf("%i", &num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("O numero digitado %i, seu antecessor é %i e seu suscessor é %i.\n", num, ant, suc);
	
	return(0);
}