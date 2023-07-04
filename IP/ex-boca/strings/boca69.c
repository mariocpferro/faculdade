#include <string.h>
#include <stdio.h>

int main()
{
    int n, i, leds=0;
    char numero[100];
    scanf("%d", &n);
    if(n>=1 && n<=1000){
        while(n>0){
            scanf("%s", numero);
            getchar();
            numero[strlen(numero)] = '\0';
            for(i=0;i<51;i++){
                if(numero[i]!='\0'){
                    switch(numero[i]){
                    case '1':
                    leds = leds+2;
                    break;
                    case '2':
                    leds = leds+5;
                    break;
                    case '3':
                    leds = leds+5;
                    break;
                    case '4':
                    leds = leds+4;
                    break;
                    case '5':
                    leds = leds+5;
                    break;
                    case '6':
                    leds = leds+6;
                    break;
                    case '7':
                    leds = leds+3;
                    break;
                    case '8':
                    leds = leds+7;
                    break;
                    case '9':
                    leds = leds+6;
                    break;
                    case '0':
                    leds = leds+6;
                    break;
                    }   
                }
                
            }
            printf("%d leds\n", leds);
            leds = 0;
            n--;
        }
    }
    return 0;
}