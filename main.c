#include <stdio.h>
#include "miPila.h"

int main() {

    struct Pila* miPila = pila_nueva();

    char* val5 = "5";
    char* val4 = "4";
    char* val3 = "3";
    char* val2 = "2";
    char* val1 = "1";

    pila_mete(miPila, val5);
    pila_mete(miPila, val4);
    pila_mete(miPila, val3);
    pila_mete(miPila, val2);
    pila_mete(miPila, val1);

    imprime_pila(miPila);

    int to1 = pila_saca(miPila);
    int to2 = pila_saca(miPila);

    imprime_pila(miPila);

    return 0;
}