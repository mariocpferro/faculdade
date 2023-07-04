#include <stdio.h>

int main()
{
    int k, n, vet[1000], ai, i, presentes=0;
    scanf("%d %d", &n, &k);
    if((n>=0 && n<=1000) && (k>=0 && k<=1000)){
        for(i=0;i<n;i++){
            scanf("%d", &vet[i]);
        }
        for(i=0;i<n;i++){
            if(vet[i]<=0){
                presentes++;
            }
        }
        if(presentes<k){
            printf("SIM\n");
        }else{
            printf("NAO\n");
            for(i=n-1;i>=0;i--){
                if(vet[i]<=0){
                    printf("%d\n", i+1);
                }
            };
        }
    }

    return 0;
}
