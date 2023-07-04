#include <stdio.h>

int main() {
    int numero, unidadeMilhar, centena, dezena, unidade;
    scanf("%d", &numero);

    if (numero <= 0 || numero > 9999) {
        printf("Numero invalido!\n");
        return 0;
    }

    unidadeMilhar = numero / 1000;
    centena = (numero % 1000) / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    if (numero > 999) {
        if (unidadeMilhar > 1){
            printf("(quarta ordem) %d = %d unidades de milhar + ", numero, unidadeMilhar);
            if (centena > 1)
                printf("%d centenas + ", centena);
            else
                printf("%d centena + ", centena);
                if (dezena > 1)
                    printf("%d dezenas + ", dezena);
                else
                    printf("%d dezena + ", dezena);
                    if (unidade > 1)
                        printf("%d unidades = %d + %d + %d + %d\n", unidade, (unidadeMilhar*1000), (centena*100), (dezena*10), unidade);
                    else
                        printf("%d unidade = %d + %d + %d + %d\n", unidade, (unidadeMilhar*1000), (centena*100), (dezena*10), unidade);
                    
        }else{
            printf("(quarta ordem) %d = %d unidade de milhar + ", numero,unidadeMilhar);
            if (centena > 1)
                printf("%d centenas + ", centena);
            else
                printf("%d centena + ", centena);
                if (dezena > 1)
                    printf("%d dezenas + ", dezena);
                else
                    printf("%d dezena + ", dezena);
                    if (unidade > 1)
                        printf("%d unidades = %d + %d + %d + %d\n", unidade, (unidadeMilhar*1000), (centena*100), (dezena*10), unidade);
                    else
                        printf("%d unidade = %d + %d + %d + %d\n", unidade, (unidadeMilhar*1000), (centena*100), (dezena*10), unidade);
        }   
    }

    if (numero > 99 && numero < 1000) {
        if (centena > 1)
            printf("(terceira ordem) %d = %d centenas + ", numero, centena);
        else
            printf("(terceira ordem) %d = %d centena + ", numero, centena);
            if (dezena > 1)
                printf("%d dezenas + ", dezena);
            else
                printf("%d dezena + ", dezena);
                if (unidade > 1)
                    printf("%d unidades = %d + %d + %d\n", unidade, (centena*100), (dezena*10), unidade);
                else
                    printf("%d unidade = %d + %d + %d\n", unidade, (centena*100), (dezena*10), unidade);
    }

    if (numero > 9 && numero < 100) {
        if (dezena > 1)
            printf("(segunda ordem) %d = %d dezenas + ", numero, dezena);
        else
            printf("(segunda ordem) %d = %d dezena + ", numero, dezena);
            if (unidade > 1)
                printf("%d unidades = %d + %d\n", unidade,(dezena*10), unidade);
            else
                printf("%d unidade = %d + %d\n", unidade,(dezena*10), unidade);
    }

    if (numero < 10) {
        if (unidade > 1)
            printf("(primeira ordem) %d = %d unidades = %d\n", numero, unidade, unidade);
        else
            printf("(primeira ordem) %d = %d unidade\n", numero, unidade);
    }

    

    return 0;
}