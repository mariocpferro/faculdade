#include <stdio.h>
#define MAX 1000

int main()
{
    int n, i;
    float distmaior=0, v1[MAX], v2[MAX],vFinal[MAX];
    scanf("%d", &n);
    if(n>=2 && n<=1000){
            for(i=0; i<3; i++){
            scanf("%f", &v1[i]);
        }
        while(n-1>0){
            for(i=0; i<3; i++){
                scanf("%f", &v2[i]);
            }
            for(i=0; i<3; i++){
                vFinal[i]=v2[i]-v1[i];
                if(vFinal[i]<0){
                    vFinal[i] = vFinal[i]*-1;
                }
            }
            for(i=0; i<3; i++){
                if(vFinal[i]>distmaior){
                    distmaior = vFinal[i];
                }
            }
            printf("%.2f\n", distmaior);
            for(i=0; i<3; i++){
                v1[i]=v2[i];
            }
            distmaior=0;
            n--;
        }
    }
    return 0;
}
