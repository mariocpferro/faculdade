#include <stdio.h>

int main()
{
    int t, i;
    int n1, n2, d11, d12, d13, d21, d22, d23;
    scanf("%d", &t);
    i=0;
    while(i<t){
        scanf("%d %d", &n1, &n2);
        d11 = n1%10;
        d12 = (n1/10)%10;
        d13 = (n1/100)%10;
        d21 = n2%10;
        d22 = (n2/10)%10;
        d23 = (n2/100)%10;
        n1 = d11*100 + d12*10 + d13;
        n2 = d21*100 + d22*10 + d23;
        if(n1>=n2){
            printf("%d\n", n1);
        }else {
            printf("%d\n", n2);
        }
        i++;
    }
    return 0;
}
