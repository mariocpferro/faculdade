#include <stdio.h>

int main()
{
    int v[5000], n, i;
    scanf("%d", &n);
    if(n<5000){
        for(i=0;i<n;i++){
            v[i]=i+1;
            printf("%d ",v[i]);
        }
    }
    
    return 0;
}
