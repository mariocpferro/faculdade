#include <stdio.h>

int main() {
    int data_int, dia, mes, ano, max_dia;

    // Ler a data no formato ddmmaaaa
    scanf("%d", &data_int);

    // Separar o dia, mês e ano da data
    dia = data_int / 1000000;
    mes = (data_int / 10000) % 100;
    ano = data_int % 10000;

    switch (mes) {
        case 2:  // fevereiro
            max_dia = 28;
            break;
        case 4: case 6: case 9: case 11:  // abril, junho, setembro, novembro
            max_dia = 30;
            break;
        default:  // todos os outros meses
            max_dia = 31;
            break;
    }
    if (dia < 1 || dia > max_dia || mes < 1 || mes > 12 || ano < 1) {
        printf("Data invalida!\n");
        return 0;
    }

    // Escrever a data no formato dia/mês/ano, <dia> de <mês por extenso> de <ano>
    printf("%d de ", dia);
    switch (mes) {
        case 1: printf("janeiro"); break;
        case 2: printf("fevereiro"); break;
        case 3: printf("março"); break;
        case 4: printf("abril"); break;
        case 5: printf("maio"); break;
        case 6: printf("junho"); break;
        case 7: printf("julho"); break;
        case 8: printf("agosto"); break;
        case 9: printf("setembro"); break;
        case 10: printf("outubro"); break;
        case 11: printf("novembro"); break;
        case 12: printf("dezembro"); break;
    }
    printf(" de %04d\n", ano);
    return 0;
}