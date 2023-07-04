#include <stdio.h>

int main()
{
    int n, v[10001], i, cont, j, menor, maior;
    scanf("%d", &n);
    while(n>1 && n<=10000){
        maior=-999;
        menor=0;
        for(i=0; i<n;i++){
            scanf("%d", &v[i]);
            if(v[i]>maior){
                maior=v[i];
            }
        }
        for(i=0;i<=maior;i++){
            menor=i;
            for(j=0; j<n; j++){
                if(v[j]<=menor){
                    cont++;
                }
            }
            printf("(%d) %d\n", i, cont);
            cont=0;
        }
        scanf("%d", &n);
    }
    return 0;
}
