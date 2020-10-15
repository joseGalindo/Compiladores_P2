#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "miPila.h"

typedef struct NodoPila NodoPila;

struct NodoPila {
    int elemento;
    NodoPila* anterior;
};

struct Pila {
    NodoPila* primero;
    int tamano;
};

Pila* pila_nueva() {
    struct Pila* pila = (struct Pila*) malloc( sizeof(struct Pila) );
    return pila;
}

void pila_mete(Pila* pila, int elemento) {
    assert(pila != NULL);
    struct NodoPila* tmp = (struct NodoPila*)malloc( sizeof(struct NodoPila) );
    tmp->elemento = elemento;
    if (pila->primero == NULL) { // significa que esta vacia
        pila->primero = tmp;
    } else { 
        tmp->anterior = pila->primero;
        pila->primero = tmp;
    }
    pila->tamano = pila->tamano + 1;
}

int pila_saca(Pila* pila) {
    assert(pila != NULL);
    struct NodoPila* tmp = pila->primero;
    if (tmp != NULL) { // No estoy vacia
        pila->primero = tmp->anterior;
        pila->tamano = pila->tamano - 1;
        return tmp->elemento;
    } else {
        // no se que regresar
        return -1;
    }
}

bool pila_es_vacia(Pila* pila) {
    assert(pila != NULL);
    return pila->tamano == 0;
}

void pila_libera(Pila* pila) {
    assert(pila != NULL);
    free(pila);
}

void imprime_pila(Pila* pila) {
    assert(pila != NULL);
    struct NodoPila* tmp = pila->primero;
    while (tmp != NULL) {
        printf("E: (%d) -> ", tmp->elemento);
        tmp = tmp->anterior;
    }
    if (tmp == NULL) {
        printf("NULL\n");
    }
}

int tamano(Pila* pila) {
    assert(pila != NULL);
    return pila->tamano;
}


