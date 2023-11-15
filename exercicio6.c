#include <stdio.h>
#include <locale.h>

#define texto "============================================================================"
#define texto2 "=============================Média Aritmética==============================="
int main(){
	setlocale (LC_ALL, "");
	
	float n1, n2, n3, n4, media;
	
	printf("%s\n", texto);
	printf("%s\n", texto2);
	printf("%s\n", texto);
	
	printf("informe sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("informe sua segunda nota: ");
	scanf("%f", &n2);
	
	printf("informe sua terceira nota: ");
	scanf("%f", &n3);
	
	printf("informe sua quarta nota: ");
	scanf("%f", &n4);
	
	printf("%s\n", texto);	
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("\nA nota final é de %.2f.", media);
	
	return(0);
}