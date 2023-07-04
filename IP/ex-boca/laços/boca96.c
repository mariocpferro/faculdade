#include <stdio.h>

int main(){
	int n, somap, somai, contp, conti;
	float mp, mi;
	somap = somai = contp = conti = 0;
	scanf("%d", &n);
	while(n!=0){
		if(n%2==0){
			somap = somap+n;
			contp++;
			}else{
				somai = somai+n;
				conti++;
				}
		scanf("%d", &n);
		}
	if(contp==0){
		mp = 0;
		}else{
			mp = (float)somap/contp;
			}
	if(conti==0){
		mi = 0;
		}else{
			mi = (float)somai/conti;
			}
	printf("MEDIA PAR: %.6f\n", mp);
	printf("MEDIA IMPAR: %.6f\n", mi);
	return 0;
	}
