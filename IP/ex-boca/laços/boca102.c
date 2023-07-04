#include <stdio.h>

int main()
{
    int n, i, total;
    scanf("%d", &n);
    if (n>0){
        i = 0;
        while(i<32){
            total = total + n;
            i++;
        }
        i = 0;
        while(i<32){
            total = total + (2*n);
            i++;
        }
        total = total-n;
        printf("%d\n", total);
    }
    return 0;
}
