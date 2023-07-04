#include <stdio.h>


int main(){
    char tipo;
    int conta;
    float consumo, valor;
    scanf ("%d %f %c", &conta, &consumo, &tipo);
    if (tipo == 'C'){
            if(consumo>=80){
        valor = 500 + (consumo-80)*0.25;
            }
            else {
        valor= 500;
            }
              printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
    }

    else if (tipo == 'I'){
            if (consumo>=100) {
        valor = 800 + (consumo-100)*0.04;
            }
            else {
        valor = 800;
            }
              printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
    }
    else if (tipo== 'R'){
            valor = 5 + 0.05*consumo;
            printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor);
    }
return 0;
}
