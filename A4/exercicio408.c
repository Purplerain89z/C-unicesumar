/*procedimento é feito com void pq não retorna nada 
void<nome_procedimento> (<parametro>){
    bloco de comandos
}
em um procedimento a saída de dados é feito atraves de passagem de parametro pro referência*/

#include <stdio.h>
#include <stdlib.h>

void somaDoisNumeros(){
    int x, y, resultado;
    printf ("Digite o primeiro número:\n");
    scanf("%d", &x);
    printf("Digite o segundo número:\n");
    scanf("%d", &y);
    resultado = x + y;
    printf("Resultado: %d.\n", resultado);
}

int main(){
    printf("Os numeros somados é:\n");
    somaDoisNumeros();
    printf("esse é o resultado");
}