#include <stdio.h>

int main()
{
    int m, x, i, j;
    scanf("%d %d", &m, &x);
    //while(m>0){
        for(i=0;i<m;i++){
            for(j=0;j<x;j++){
                if(i%2==0){
                    if((j%2==0) && (j!=x-1)){
                        printf("1");
                    }else if((j%2!=0) && (j!=x-1)){
                        printf("0");
                    }else if((j%2==0) && (j==x-1)){
                        printf("1\n");
                    }else if((j%2!=0) && (j==x-1)){
                        printf("0\n");
                    }
                }else{
                   if((j%2==0) && (j!=x-1)){
                        printf("0");
                    }else if((j%2!=0) && (j!=x-1)){
                        printf("1");
                    }else if((j%2==0) && (j==x-1)){
                        printf("0\n");
                    }else if((j%2!=0) && (j==x-1)){
                        printf("1\n");
                    } 
                }
            }
        }
    //    m--;
   // }

    return 0;
}

