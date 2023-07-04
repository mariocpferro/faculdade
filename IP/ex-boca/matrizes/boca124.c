#include <stdio.h>

int main()
{
    int a,b,c,d;
    float r1,r2,r3,r4;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    r1=(a*a)+(b*c);
    r2=(a*b)+(b*d);
    r3=(c*a)+(d*c);
    r4=(c*b)+(d*d);
    printf("%.3f %.3f\n", r1, r2);
    printf("%.3f %.3f\n", r3, r4);
    return 0;
}

