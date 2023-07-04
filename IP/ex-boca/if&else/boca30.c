#include <stdio.h>


int main (){
    float n1, n2, n3;
    scanf("%f %f %f", &n1, &n2, &n3);
    if ((n1>=n2)&&(n1>=n3)&&(n2>=n3)){
        printf ("%.2f, %.2f, %.2f", n3, n2, n1 );
    }
    else if ((n2>=n1)&&(n2>=n3)&&(n1>=n3)){
        printf ("%.2f, %.2f, %.2f", n3, n1, n2);
    }
    else if ((n3>=n2)&&(n3>=n1)&&(n1>=n2)){
        printf ("%.2f, %.2f, %.2f", n2, n1, n3);
    }
    else if ((n1>=n2)&&(n1>=n3)&&(n3>=n2)){
        printf ("%.2f, %.2f, %.2f", n2, n3, n1 );
    }
    else if ((n2>=n1)&&(n2>=n3)&&(n3>=n1)){
        printf ("%.2f, %.2f, %.2f", n1, n3, n2);
    }
    else if ((n3>=n2)&&(n3>=n1)&&(n2>=n1)){
        printf ("%.2f, %.2f, %.2f", n1, n2, n3);
    }

return 0;
}
