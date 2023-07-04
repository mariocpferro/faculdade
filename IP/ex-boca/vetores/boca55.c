#include <stdio.h>
#define MAX 1000

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void bubble_sort(int v[], int n){
    int i, j;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(v[j]>v[j+1]){
                troca(&v[j], &v[j+1]);
            }
        }
    }
}

int main()
{
    int t, n, vet[MAX], cont, k, diferenca, i, j;
    scanf("%d", &t);
    if(t>=1 && t<=10){
        while(t--){
            scanf("%d", &n);
            if(n>=2 && n<=1000){
                for(k=0;k<n;k++){
                    scanf("%d", &vet[k]);
                }
                bubble_sort(vet, n);
                cont=99999;
                for(i=0;i<n-1;i++){
                    for(j=i+1;j<=n;j++){
                        diferenca=vet[i]-vet[j];
                        if(diferenca<0){
                            diferenca = -diferenca;
                        }
                        if(cont>diferenca){
                            cont=diferenca;
                        }
                    }
                }
                printf("%d %d\n", cont, n*n);
            }
        }
    }
    return 0;
}
