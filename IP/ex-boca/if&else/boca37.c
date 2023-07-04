#include <stdio.h>

int main()
{
    int a, b, c, n1, n2, n3;
    char x, y, z;
    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%c%c%c", &x, &y, &z);
    
    if(n1 <= 100 && n2 <= 100 && n3 <= 100){
        if(n1 > n2 && n2>n3){
            a = n3;
            b = n2;
            c = n1;
        }else if(n1 > n3 && n3>n2){
            a = n2;
            c = n1;
            b = n3;
        }else if(n2 > n1 && n1>n3){
            a = n3;
            b = n1;
            c = n2;
        }else if(n2 > n3 && n3>n1){
            a = n1;
            b = n3;
            c = n2;
        }else if(n3 > n1 && n1>n2){
            a = n2;
            b = n1;
            c = n3;
        }else if(n3 > n2 && n2>n1){
            a = n1;
            b = n2;
            c = n3;
        }
        if(x == 'A' && y == 'B' && z == 'C'){
            printf("%d %d %d\n", a, b, c);
        }else if(x == 'A' && y == 'C' && z == 'B'){
            printf("%d %d %d\n", a, c, b);
        }else if(x == 'B' && y == 'A' && z == 'C'){
            printf("%d %d %d\n", b, a, c);
        }else if(x == 'B' && y == 'C' && z == 'A'){
            printf("%d %d %d\n", b, c, a);
        }else if(x == 'C' && y == 'A' && z == 'B'){
            printf("%d %d %d\n", c, a, b);
        }else if(x == 'C' && y == 'B' && z == 'A'){
            printf("%d %d %d\n", c, b, a);
        }
    }
    return 0;
}