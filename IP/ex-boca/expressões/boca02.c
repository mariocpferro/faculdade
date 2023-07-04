#include <stdio.h>

int main() {
	float salmin, qtdkw, custoKwH;
	scanf("%f%f", &salmin, &qtdkw);
	custoKwH=(salmin*0.7)/100;
	printf("Custo por kW: R$ %.2f\n", custoKwH);
	printf("Custo do consumo: R$ %.2f\n", custoKwH*qtdkw);
	printf("Custo com desconto: R$ %.2f\n", custoKwH*qtdkw*.9);
	
	return 0;
}
