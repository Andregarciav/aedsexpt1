#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, p, s, t;
    d = 500;
    d = (d + 0.01*d) + 0.01*(d + 0.01*d) + 0.01*((d + 0.01*d) + 0.01*(d + 0.01*d));

    /*p = d + 0.01*d;
    s = p + 0.01*p;
    t = s + 0.01*s;*/
    printf("Valor na conta = %.2f\n" , d);
    return 0;
}
