#include <stdio.h>

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void bubble_sort(int v[], int n){
    int i, j;
    for(i=1; i<n;i++){
        for(j=0; j<n-i;j++){
            if(v[j]>v[j+1]){
                troca(&v[j], &v[j+1]);
            }
        }
    }
}

int main()
{
    int n, vet[10000], k=0;
    float mediana;
    scanf("%d", &n);
    while(k<n){
        scanf("%d", &vet[k]);
        k++;
    }
    bubble_sort(vet, n);
    if(n%2==0){
        mediana = vet[(n/2)-1] + vet[n/2];
        mediana = mediana/2;
    }else{
        mediana= vet[n/2];
    }
    printf("%.2f", mediana);
    return 0;
}
