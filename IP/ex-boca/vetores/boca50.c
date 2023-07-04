#include <stdio.h>
#include <math.h>

typedef struct {float x;
                float y;
                float z;
                }Ponto;

int main()
{
    Ponto vet[1000];
    int n, i=0, j;
    float distancia;
    scanf("%d", &n);
    if(n>=2 && n<=1000){
        while(n>i){
            scanf("%f %f %f", &vet[i].x, &vet[i].y, &vet[i].z);
            i++;
        }
        i=1;
        j=0;
        while(n>i){
            distancia = sqrt((pow(vet[j].x-vet[i].x, 2)+ pow(vet[j].y-vet[i].y, 2)+ pow(vet[j].z-vet[i].z, 2)));
            printf("%.2f\n", distancia);
            j=i;
            i++;
        }
    }
    return 0;
}
