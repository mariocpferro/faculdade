#include <stdio.h>

void ordenarNumeros(float numeros[], int tamanho) {
    int i, j;
    float temp;
    
    for (i = 0; i < tamanho-1; i++) {
        for (j = 0; j < tamanho-i-1; j++) {
            if (numeros[j] > numeros[j+1]) {
                temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }
}

int main() {
    float numeros[4];
    int i;
    
    // Leitura dos números
    for (i = 0; i < 4; i++) {
        scanf("%f", &numeros[i]);
    }
    
    // Ordenação dos números
    ordenarNumeros(numeros, 4);
    
    // Impressão dos números ordenados
    for (i = 0; i < 4; i++) {
        printf("%.2f", numeros[i]);
        
        // Se não for o último número, imprimir vírgula e espaço
        if (i < 3) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}