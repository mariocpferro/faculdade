#include <stdio.h>
#define MAX 10000

int main()
{
    int n, i, vet[MAX], maior=-99999, indice;
    scanf("%d", &n);
    if(n>1 && n<=MAX){
        while(n!=0 && n<=MAX){
            for(i=0;i<n;i++){
                scanf("%d", &vet[i]);
            }
            for(i=0;i<n;i++){
                if(vet[i]>maior){
                    maior=vet[i];
                    indice = i;
                }
            }
            printf("%d %d\n", indice, maior);
            scanf("%d", &n);
        }
    }
    return 0;
}
