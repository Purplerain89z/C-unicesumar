#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("Digite o número: ");
	scanf("%d", &num);
	printf("\n o antecessor é: %d",num-1);
	printf("\n o sucessor é: %d", num+1);
	return (0);
}