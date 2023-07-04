#include <stdio.h>

int main()
{
    int v[1000], n, k, cont=0, i;
    scanf("%d", &n);
    while(n<1 || n>1000){
        scanf("%d", &n);
    }
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &k);
    for(i=0;i<n;i++){
        if(v[i]>=k){
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}
