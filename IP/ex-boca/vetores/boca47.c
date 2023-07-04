#include <stdio.h>

int main()
{
    int n, v[5000], i=0, soma;
    scanf("%d", &n);
    while(i<n){
        scanf("%d", &v[i]);
        i++;
    }
    for(i=0; i<n; i++){
        soma= v[i]+soma;
    }
    printf("%d\n", soma);
    return 0;
}
