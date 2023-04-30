#include <stdio.h>
#include <stdlib.h>

int main(void){
    float base, altura, area, perimetro;

    printf("Ingresa base ");
    scanf("%f",&base);
    printf("Ingresa altura ");
    scanf("%f",&altura);
    area = base*altura;
    perimetro = 2*base + 2*altura;

    printf("base\t  = %f\n",base);
    printf("altura\t  = %f\n",altura);
    printf("area\t  = %f\n",area);
    printf("perimetro = %f\n",perimetro);

    return 0;
}
