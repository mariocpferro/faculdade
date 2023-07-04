#include <stdio.h>

int main(){
	int matricula;
	float horas, valor, salario;
	scanf("%d %f %f\n", &matricula, &horas, &valor);
	while(matricula != 0){
			salario = horas*valor;
			printf("%d %.2f\n", matricula, salario);
			scanf("%d %f %f\n", &matricula, &horas, &valor);
		}
	return 0;
	}
