#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,  b, c;

    printf("Ingresa un entero ");
    scanf("%d",&a);
    printf("Ingresa otro entero ");
    scanf("%d",&b);
    c=a+b;

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    printf("%d + %d = %d\n",a,b,c);

    return 0;
}
