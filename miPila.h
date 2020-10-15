#include <stdbool.h>

/* Estructura para Pilas */
typedef struct Pila Pila;

/* Crea una nueva Pila */
Pila* pila_nueva(void);

void pila_mete(Pila* pila, int elemento);

int pila_saca(Pila* pila);

bool pila_es_vacia(Pila* pila);

void pila_libera(Pila* pila);

void imprime_pila(Pila* pila);

int tamano(Pila* pila);