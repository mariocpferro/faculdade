#include <stdio.h>
#define MAX 5000

int main()
{
    int n, vet[MAX], i, cont=0, j, elemen=0;
    scanf("%d", &n);
    if(n<5000){
        for(i=0;i<n;i++){
            scanf("%d", &vet[i]);
        }
        for(i=0;i<n;i++){
            cont=0;
            for(j=0;j<n;j++){
                if((vet[j]==vet[i]) && (i!=j)){
                    cont++;
                }
            }
            if(cont==0){
                elemen++;
            }
        }
        printf("%d\n", elemen);
    }
    return 0;
}
