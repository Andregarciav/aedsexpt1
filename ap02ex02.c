#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, p, s, t; // declaração de variaveis
    d = 500; //define o valor de d, poderia ser definido junto da declaração de variaveis
    d = (d + 0.01*d) + 0.01*(d + 0.01*d) + 0.01*((d + 0.01*d) + 0.01*(d + 0.01*d)); //

    /*p = d + 0.01*d;
    s = p + 0.01*p;
    t = s + 0.01*s;*/
    printf("Valor na conta = %.2f\n" , d); //imprime o valor na conta após 3 meses
    return 0;
}
