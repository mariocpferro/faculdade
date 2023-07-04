#include <stdio.h> // não le frase com espaços, não está lendo as consoantes corretamente, não le letras maiusculas
#include <string.h>
#include <ctype.h>

int main(){
    int i, n, tamanho, one, two, three;
    char palavra[6];
    scanf("%d", &n);
    getchar();
    if(n>=1 && n<=1000){
        while(n--){
            one=0;
            two=0;
            three=0;
            scanf("%s", palavra);
            getchar();
            tamanho = strlen(palavra);
            for(i=0;i<tamanho; i++){
                if((palavra[i]== 'o' || palavra[i]=='n'|| palavra[i]=='e')&& tamanho==3){
                    one++;
                }
                if((palavra[i]== 't' || palavra[i]=='w'|| palavra[i]=='o')&& tamanho==3){
                    two++;
                }
                if((palavra[i]== 't' || palavra[i]=='h'|| palavra[i]=='r'|| palavra[i]=='e')&& tamanho==5){
                    three++;
                }
            }
        }
    }
    return 0;
}