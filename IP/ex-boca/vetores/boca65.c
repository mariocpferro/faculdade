#include <stdio.h>

int trocaverdade(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int bubble_sort(int v[], int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            if(v[j]>v[j+1]){
                trocaverdade(&v[j], &v[j+1]);
            }
        }
    }
}


int main()
{
    int i, j, t, anoes[9], soma, diferenca, indice1, indice2;
    scanf("%d", &t);
    while(t--){
        soma=0;
        i=0;
        while(i<9){
            scanf("%d", &anoes[i]);
            if(anoes[i]>=1 && anoes[i]<=99){
                if(i>0 && anoes[i]!= anoes[i-1]){
                    soma = soma+anoes[i];
                    i++;
                }else if(i==0){
                    soma = soma+anoes[i];
                    i++;
                }else{
                    return 0;
                }
            }else{
                return 0;
            }
        }
        diferenca = soma-100;
        for(i=0; i<9;i++){
            for(j=0;j<9;j++){
                if(j!=i && (anoes[i]+anoes[j]==diferenca)){
                    indice1=i;
                    indice2=j;
                }
            }
        }
        anoes[indice1] = 1000;
        anoes[indice2] = 1000;
        bubble_sort(anoes, 7);
        for(i=0;i<7;i++){
            printf("%d\n", anoes[i]);
        }
    }

    return 0;
}
