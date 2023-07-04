#include <stdio.h>

int main()
{
    int n, vet[10000], i=0, j, maior= -999, ultimo=0, cont=0, indice;
    scanf("%d", &n);
    while(i<n){
        scanf("%d", &vet[i]);
        i++;
    }
    ultimo = vet[i-1];
    for(j=0; j<n;j++){
        if(vet[j]==ultimo){
            cont++;
        }
    }
    if(cont==1){
        printf("Nota %d, %d vez\n", ultimo, cont);
    }else{
        printf("Nota %d, %d vezes\n", ultimo, cont);
    }
    
    i=0;
    for(i=0; i<n;i++){
        if(vet[i]>maior){
            maior= vet[i];
            indice=i;
        }
    }
    printf("Nota %d, indice %d\n", maior, indice);

    return 0;
}
