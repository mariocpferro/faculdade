#include <stdio.h>
#define MAX 11

int main()
{
    int t, vet[MAX], i, d1=0, d2=0, aux, aux1, aux2;
    scanf("%d", &t);
    while(t>0){
        d1=0;
        d2=0;
        aux=9;
        for(i=0;i<11;i++){
            scanf("%d", &vet[i]);
        }
        d1 = (vet[0]*1)+(vet[1]*2)+(vet[2]*3)+(vet[3]*4)+(vet[4]*5)+(vet[5]*6)+(vet[6]*7)+(vet[7]*8)+(vet[8]*9);
        d1 = d1%11;
        d2 = (vet[0]*9)+(vet[1]*8)+(vet[2]*7)+(vet[3]*6)+(vet[4]*5)+(vet[5]*4)+(vet[6]*3)+(vet[7]*2)+(vet[8]*1);
        d2 = d2%11;
        if(vet[9]==d1 && vet[10]==d2){
            printf("CPF valido\n");
        }else{
            printf("CPF invalido\n");
        }
        t--;
    }
    
    return 0;
}
