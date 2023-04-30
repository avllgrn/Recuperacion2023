#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float radio, area, perimetro;

    printf("Ingresa radio ");
    scanf("%f",&radio);

    area = M_PI * pow(radio,2);
    perimetro = 2 * M_PI * radio;

    printf("radio\t  = %f\n",radio);
    printf("area\t  = %f\n",area);
    printf("perimetro = %f\n",perimetro);

    return 0;
}
