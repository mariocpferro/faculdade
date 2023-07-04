#include <string.h>
#include <stdio.h>

int main()
{
    int n, i, maior;
    char primeira[51], segunda[51];
    scanf("%d", &n);
    while(n>0){
        scanf("%s", primeira);
        getchar();
        scanf("%s", segunda);
        getchar();
        if(strlen(primeira)>strlen(segunda)){
            maior=strlen(primeira);
        }else{
            maior=strlen(segunda);
        }
        primeira[strlen(primeira)] = '\0';
        segunda[strlen(segunda)] = '\0';
        for(i=0;i<maior;i++){
            if(primeira[i]!='\0'){printf("%c", primeira[i]);}
            if(segunda[i]!='\0'){printf("%c", segunda[i]);}
        }
        printf("\n");
        n--;
    }
    return 0;
}