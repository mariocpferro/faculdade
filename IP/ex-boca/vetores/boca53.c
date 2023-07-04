#include <stdio.h>

int main()
{
    int n, vet[1000000], cont[100], i=0, j, contagem=1, numero=999999;
    scanf("%d", &n);
    if((n>=1) && (n<=1000000)){
        while(i<n){
            scanf("%d", &vet[i]);
            if((vet[i]<100) && (vet[i]>0)){
                i++;
            }else{
                break;
            }
        }
        for(j=0;j<n;j++){
            for(i=0;i<n;i++){
                if(vet[i]==vet[j]){
                    cont[j]++;
                }
            }
        }
        for(j=0;j<n;j++){
            if(cont[j]>contagem){
                contagem=cont[j];
                numero=vet[j];
            }
            else if(cont[j]==contagem){
                if(vet[j]<numero){
                    numero=vet[j];
                }
            }
        }
        printf("%d\n", numero);
        printf("%d\n", contagem);
    }
    return 0;
}
