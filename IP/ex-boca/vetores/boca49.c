#include <stdio.h>

int main()
{
    int i, n, maior;
    scanf("%d", &n);
        int vet[n];
        for(i=0;n>0;i++){
            vet[i]= n%2;
            n=n/2;
        }
        if(i>0){
            i = i-1;
        }
        while(i>=0){
            printf("%d", vet[i]);
            i--;
        }
    return 0;
}
