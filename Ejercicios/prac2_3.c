#include <stdio.h>

int main() {
    int var = 7;
    int* ap;

    ap = &var;
    printf("Direccion de memoria de la variable var: %x\n", &var);

    printf("El valor de la variable apuntador ap: %x\n", ap);
    printf("El valor de la variable apuntador ap ++ : %x\n", ++ap);
    printf("El valor de la variable apuntador ap -- : %x\n", --ap);

    printf("valor de ap: %d\n", *ap);


    //
    int var1, var2;
    int* p;
    var1 = 5;    // var1 = 5
    p = &var1;   // p ahora apunta a var1
    var2 = *p;   // var2 apunta a lo que hay en p = 5
    *p = 10;     // ahora p y var1 son 10

    printf("El valor de var1 es: %d; mientras que var2 es: %d\n", var1, var2);

    return 0;
}