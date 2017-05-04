#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;
    a = pow ( a , 31) - 1;
    printf("%d\n", a );
    a += 1;
    printf("%d\n", a );

}
