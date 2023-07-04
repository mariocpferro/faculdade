#include <stdio.h> // não le frase com espaços, não está lendo as consoantes corretamente, não le letras maiusculas
#include <string.h>
#include <ctype.h>

int main(){
    int i, n, consoantes, vogais, tamanho;
    char palavra[10000];
    scanf("%d", &n);
    getchar();
    while(n--){
        vogais = 0;
        consoantes = 0;
        fgets(palavra, 500, stdin);
        palavra[strlen(palavra)-1]='\0';
        tamanho = strlen(palavra);
        for(i=0;i<tamanho;i++){
            palavra[i] = tolower(palavra[i]);
        }
        for(i=0; i<tamanho; i++){
            if(palavra[i]!='\0' && (palavra[i]!='a' && palavra[i]!='e' && palavra[i]!='i' && palavra[i]!='o' && palavra[i]!='u' && palavra[i]!= ' ')){
                consoantes++;
            }
            if(palavra[i]!='\0' && (palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u') && palavra[i]!= ' '){
                vogais++;
            }
        }
        printf("Letras = %d\n", vogais+consoantes);
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", consoantes);
    }
    return 0;
}