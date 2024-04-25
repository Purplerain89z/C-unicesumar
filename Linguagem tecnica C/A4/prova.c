#include <stdio.h>
#include <math.h>

float area(float r);

int main(){
    float raio;
    printf("Entre com o raio: ");
    scanf("%f",&raio);
    printf("A area da esfera é - %.2f", area(raio));
    return(0);
}
float area(float r){
    return (4 * M_PI * pow(r, 2));
}