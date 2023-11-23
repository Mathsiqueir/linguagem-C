nclude <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 1. Declare a variable of type integer with the name "x" and assign it an initial value of 5.
    int v[5] = {10, 20, 30 , 40, 50};
    int i = 0;
    float s = 0;

    for(i=0; i< 5; i++){
        s += v[i];
    }
    printf("Resultado: %.2f \n", s/5);
}

