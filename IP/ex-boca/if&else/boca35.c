#include <stdio.h>

int main(){
    int matricula, depen;
    float salmin, sal, taxa, inormal, ibruto, iliquido, imposto;
    scanf("%d %f %d %f %f", &matricula, &salmin, &depen, &sal, &taxa);
    inormal = (taxa/100)*sal;
    if(sal/salmin > 12){
        ibruto = 0.2*sal;
        iliquido = ibruto - (300*depen);
    } else if (sal/salmin > 5){
        ibruto = 0.08*sal;
        iliquido = ibruto - (300*depen);
    } else if (sal/salmin <= 5){
        ibruto = 0*sal;
        iliquido = -(300*depen);
    }
    imposto = iliquido - inormal;
    printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\nIMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\n", matricula, ibruto, iliquido, imposto);
        if(imposto > 0){
            printf("IMPOSTO A PAGAR\n");
        } else if(imposto == 0) {
            printf("IMPOSTO QUITADO\n");
        } else if(imposto < 0) {
            printf("IMPOSTO A RECEBER\n");
        }
    return 0;
}