#include <stdio.h>

int main()
{
    int v[5000], n, i;
    scanf("%d", &n);
    if(n<5000){
        for(i=0;i<n;i++){
        scanf("%d", &v[i]);
        }
        for(i=i-1;i>=0;i--){
            printf("%d ", v[i]);
        }
    }
    
    return 0;
}
