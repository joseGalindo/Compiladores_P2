#include <stdio.h>
#include "miPila.h"

int main() {

    struct Pila* miPila = pila_nueva();
    
    pila_mete(miPila, 5);
    pila_mete(miPila, 4);
    pila_mete(miPila, 3);
    pila_mete(miPila, 2);
    pila_mete(miPila, 1);

    imprime_pila(miPila);

    int to1 = pila_saca(miPila);
    int to2 = pila_saca(miPila);

    imprime_pila(miPila);

    return 0;
}