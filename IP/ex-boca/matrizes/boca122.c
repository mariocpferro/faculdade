#include <stdio.h>

int main()
{
    int colunas, linhas, i, j, matriz, contador=0, vet[100];
    scanf("%d", &linhas);
    while((linhas==0) || (linhas>10)){
        scanf("%d", &linhas);
    }
    scanf("%d", &colunas);
    while((colunas==0) || (colunas>10)){
        scanf("%d", &colunas);
    }
    matriz = linhas*colunas;
    for(i=0;i<matriz;i++){
        scanf("%d", &vet[i]);
    }
    for(i=1;i<=linhas;i++){
        for(j=0;j<colunas;j++){
            if(j==0){
                printf("linha %d: %d", i, vet[contador]);
            }else if(j==(colunas-1)){
                printf(",%d\n", vet[contador]);
            }else if((j!=0) &&(j!=(colunas-1))){
                printf(",%d", vet[contador]);
            }
            contador++;
        }
    }
    return 0;
}

