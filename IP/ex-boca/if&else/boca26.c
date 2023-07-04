#include <stdio.h>


int main(){
    float sal, nsal;
    scanf("%f", &sal);
    if (sal<=300){
        nsal=sal*1.5;
    }
    else {
        nsal = sal * 1.30;
    }
    printf("SALARIO COM REAJUSTE = %.2f\n", nsal);

return 0;
}
