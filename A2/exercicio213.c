#include <stdio.h>

int main(){
    int cod, carga;
    float precoQuilo, ton, total, totalPagar, quilos,cargo;

    printf("Informe o Codigo do Estado\n");
    printf("[1] - São Paulo\n[2] - Alagoas\n[3] - Rio de Janeiro\n[4] - Paraná\n");
    scanf("%d",&cod);
    printf("Informe quantas toneladas esta levando: ");
    scanf("%f",&ton);
    printf("Codigo da carga:");
    scanf("%d",&carga);

    if (carga > 9 || carga < 21){
        precoQuilo = 180;
    }else if ( carga > 20 || carga <31){
              precoQuilo = 120;
    }else if(carga >30 || carga< 41){
            precoQuilo = 230;
    }else {
        printf("Precisa fazer uma consulta personalizada.");
    }

    switch (cod)
    {
    case 1:
            quilos = (ton * 1000);
            total =  (quilos * precoQuilo);
            cargo = ((total * 20) / 100);
            totalPagar = (total + cargo);
        break;
    case 2:
            quilos = (ton * 1000);
            total =  (quilos * precoQuilo);
            cargo = ((total * 15) / 100);
            totalPagar = (total + cargo);
        break;    
    case 3:
            quilos = (ton * 1000);
            total =  (quilos * precoQuilo);
            cargo = ((total * 10) / 100);
            totalPagar = (total + cargo); 
        break;       
    case 4:
            quilos = (ton * 1000);
            total =  (quilos * precoQuilo);
            cargo = ((total * 20) / 100);  
            totalPagar = (total + cargo);
        break;        
    default:
        printf("Consulte o gerente");
        break;
    };
    printf("O peso da carga em quilos é %.2f,O preço da carga é %.2f, o valor do imposto é %.2f, o total é a pagar é: %2.f.", quilos, total, cargo, totalPagar);
    return(0);
}