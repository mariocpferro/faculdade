#include <stdio.h>

int main(){
    int m, n, i, j;
    scanf("%d %d", &m, &n);
    if(m>0 && n>0){
        for (i = 1; i <= m; i++) {
            for (j = 1; j < i && j<=n; j++) {
                if(i+j == i+n || i==j+1){
                    printf("(%d,%d)", i, j);
                }else if (i!=j) {
                    printf("(%d,%d)-", i, j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
    
