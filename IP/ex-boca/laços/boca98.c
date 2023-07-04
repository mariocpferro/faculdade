#include <stdio.h>

int main(){
	int n, i, resultado = 0;
	scanf("%d", &n);
	if(n==1){
		printf("NAO PRIMO\n");
		}else{
			for (i = 2; i <= n/2; i++){
				if(n%i==0){
					resultado++;
					break;
					}
				}
	
			if (resultado == 0){
				printf("PRIMO\n");
				}else {
					printf("NAO PRIMO\n");
					}
			}
	
	}
