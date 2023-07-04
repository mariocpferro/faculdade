#include <stdio.h>


int main (){
	int x1, x2, x3, x4, res;
	scanf ("%d %d %d %d", &x1, &x2, &x3, &x4);
	if ((x1>=x2)&&(x1>=x3)&&(x1>=x4)){
		res = x2+x3+x4;
		printf("%d\n", res);
		}
	else if (((x2>=x1)&&(x2>=x3)&&(x2>=x4))){
		res = x1+x3+x4;
		printf("%d\n", res);
		}
	else if (((x3>=x1)&&(x3>=x2)&&(x3>=x4))){
		res = x1+x2+x4;
		printf("%d\n", res);
	 }
	 else if (((x4>=x1)&&(x4>=x2)&&(x4>=x3))){
		res = x1+x2+x3;
		printf("%d\n", res);
	}
	
return 0;	
	}
