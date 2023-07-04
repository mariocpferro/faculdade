#include <stdio.h>

int main()
{
    int n, vet[1000], i=0, menor, j, anterior=-1;
    scanf("%d", &n);
    if((n>1) && (n<1000)){
        while(i<n){
            scanf("%d", &vet[i]);
            i++;
        }
        for(j=0;j<n;j++){
            i=0;
            menor=9999;
            for(i=0;i<n;i++){
                if((vet[i]<menor) && (vet[i]>anterior)){
                    menor=vet[i];
                }
            }
            anterior=menor;
            printf("%d\n", menor);
        }
    }
    
    

    return 0;
}
