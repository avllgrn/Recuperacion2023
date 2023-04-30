#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float base, altura, area, perimetro;

    printf("Ingresa base ");
    scanf("%f",&base);

    altura = sqrt( pow(base,2) - pow(base/2,2) );
    area = base*altura/2;
    perimetro = 3*base;

    printf("base\t  = %f\n",base);
    printf("altura\t  = %f\n",altura);
    printf("area\t  = %f\n",area);
    printf("perimetro = %f\n",perimetro);

    return 0;
}
