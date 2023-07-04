#include <stdio.h>

int main () {
	unsigned int matricula;
	double p1,p2,p3,p4,p5,p6,p7,p8,l1,l2,l3,l4,l5,trabalho,presenca,nota, mp, ml;
	scanf("%u %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&matricula,&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8,&l1,&l2,&l3,&l4,&l5,&trabalho,&presenca);
	while(matricula != -1){
	    mp = (p1+p2+p3+p4+p5+p6+p7+p8)/8;
	    ml = (l1+l2+l3+l4+l5)/5;
	    nota = 0.7*mp+0.15*ml+0.15*trabalho;
	    if(nota>=6 && 96 <= presenca){
		printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, nota);
		}else if(nota<6 && presenca < 96){
				printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nota);
			}else if(nota<6){
				printf("Matricula: %u, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, nota);
			}else if(96 > presenca){
				printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, nota);
			}
		scanf("%u %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&matricula,&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8,&l1,&l2,&l3,&l4,&l5,&trabalho,&presenca);
	}
	return 0;
	}
