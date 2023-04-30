#include <stdio.h>
#include <stdlib.h>

int main(void){
    float a,  b, c;

    printf("Ingresa un entero ");
    scanf("%f",&a);
    printf("Ingresa otro entero ");
    scanf("%f",&b);
    c=a+b;

    printf("a = %f\n",a);
    printf("b = %f\n",b);
    printf("c = %f\n",c);
    printf("%f + %f = %f\n",a,b,c);

    return 0;
}
