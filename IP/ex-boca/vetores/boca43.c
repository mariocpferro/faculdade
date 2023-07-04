#include <stdio.h>

int main()
{
    int v[1000], n, k, cont=0, i;
    scanf("%d", &n);
    if(n>=1 && n<=1000){
        for(i=0;i<n;i++){
        scanf("%d", &v[i]);
        }
        for(i=0;i<n;i++){
        if(v[i]%2==0){
            printf("%d ", v[i]);
            cont++;
        }
    }
    }
    printf("%d", cont);
    return 0;
}
