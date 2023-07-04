#include <stdio.h>


int main (){
    int base10, b1, b2, b3, b4, b5, b6, b7, b8;
    scanf("%d", &base10);
    if ((base10>=0)&&(base10<=255)){
          b8= (base10%2);
          base10 = base10/2;
          b7= (base10%2);
          base10 = base10/2;
          b6= (base10%2);
          base10 = base10/2;
          b5= (base10%2);
          base10 = base10/2;
          b4= (base10%2);
          base10 = base10/2;
          b3= (base10%2);
          base10 = base10/2;
          b2= (base10%2);
          base10 = base10/2;
          b1= (base10%2);
          printf("%d%d%d%d%d%d%d%d",b1, b2, b3, b4, b5, b6,b7,b8 );
    }
    else {
        printf ("Numero invalido!");

    }







    return 0;
}
