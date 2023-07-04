#include <stdio.h>
#define MAX 100000
void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
void bubble_sort(int v[], int n){
    int i, j;
    for(i=1;i<n;i++){
        for(j=0; j<n-i;j++){
            if(v[j]>v[j+1]){
                troca(&v[j], &v[j+1]);
            }
        }
    }
}
int main()
{
    int n, vet[MAX], i;
    scanf("%d", &n);
    if(n>1 && n<100000){
        for(i=0; i<n;i++){
            scanf("%d", &vet[i]);
        }
        bubble_sort(vet, n);
        for(i=0; i<n; i++){
            if(vet[i]%2==0){
                printf("%d\n", vet[i]);
            }
        }
        for(i=n; i>=0; i--){
            if(vet[i]%2!=0){
                printf("%d\n", vet[i]);
            }
        }
    }
    return 0;
}
