#include <stdio.h>


int main (){
    int x, y;
    scanf("%d", &x);
    if (x<1){
     y=x;
    }
    else if (x==1){
     y=0;
    }
    else if (x>1){
     y=x*x;
    }
    printf("Y = %d", y);

return 0;
}
