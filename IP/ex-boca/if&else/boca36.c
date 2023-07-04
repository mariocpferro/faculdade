#include <stdio.h>

int main(){
	int num, n1, n2, n3, n4, n5;
	scanf("%d", &num);
	n5 = num%10;
	n4 = (num/10)%10;
	n3 = (num/100)%10;
	n2 = (num/1000)%10;
	n1 = (num/10000)%10;
	if (num > 99999){
		printf("NUMERO INVALIDO");
		}else{
			if(n1==n5 && n2==n4){
				printf("PALINDROMO");
				}else if(num < 1000 && n5==n3){
				    printf("PALINDROMO");
				}else if(num < 100 && n5==n4){
				    printf("PALINDROMO");
				}else if(num < 10000 && n5==n2 && n4==n3){
				    printf("PALINDROMO");
				}else{
					printf("NAO PALINDROMO");
					};
			}
	return 0;
}