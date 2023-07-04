#include <stdio.h>
#include <string.h>

int main()
{
    char soma[10];
    int i, n1, n2, final;
    scanf("%d %d", &n1, &n2);
    while(n1 != 0 && n2 != 0) {
        sprintf(soma, "%d", n1 + n2);
        final = strlen(soma);
        soma[strlen(soma)]='\0';
        for(i = 0; i < final; i++) {
            if(soma[i] != '0' && soma[i] != '\0') {
                printf("%c", soma[i]);
            }
        }
        scanf("%d %d", &n1, &n2);
    }
    return 0;
}
