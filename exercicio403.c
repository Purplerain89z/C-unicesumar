#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*scanf não lê frases com espaço
dispensa o uso do operador &*/
/*gestsLê espaço, sintexe mais simples
cuidado: permite textes maiores que o tamanho*/
/* inicialização
char str [6] = {"T","e","s","t","e"};

char str1[6] = {"Teste"};

*/
/* scanf()
...
...
char str[10];
scanf("%s", str);

usar fflush(stdin); para a limpesa do teclado


gets()

char str[10];
gets(str);
*/
/*strcpy
copia ou atribui o conteudo da string de origem para o destino
sintaxe: strcpy (destino, origem)
o tamanho de destino deve ser igual ou maior que o de origim
*/

/*
char str_ori[10], str_dest[10];
strcpy(str_ori, "teste"); atribui o teste ao str_ori

strcpy(str_dest, str_ori) pega o conteudo de str_ori e atribui ao str_dest o da direita vai apra o da esquerda

igualdade
strcmp()
compara o conteudo da primeira string com o da segunda
retorna 0 caso as strings sejam idênticas
retorna algo diferente de 0, caso contrárop
É case sensitive: diferencia maiusculo de menusculo

char str_1[10] = {"Teste"};
char str_2[10] = {"Teste"};
if (strcmp(str_1, str_2) == 0)
    { bloco de comandos  }


concatenação

funcção strcat();
sintaxe: strcat(destino, origim);
junta o conteudo da string de origeim ao final do conteudo de destino

char str_1[10] = {"Teste"};
char str_2[10] = {"Teste"};
strcat(str_1, str_2); o resultando é concatenar str_1 ao str_2 e junta tudo no str_1
printf("%s", str_1);

*/