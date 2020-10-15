#include <stdio.h>
#include <stdlib.h>

int main() {
    char card_name[3];
    puts("La letra o numero de la carta para saber su valor en blackjack: ");
    scanf("%s", card_name);

    int val = 0;
    switch (card_name[0]) {
    case 'K':
        val = 10;
        break;
    case 'Q':
        val = 10;
        break;
    case 'J':
        val = 10;
        break;
    case 'A':
        printf("El valor de esta carta puede ser 11 o 1. Tu eliges.\n");
        return 0;
    default:
        val = atoi(card_name);
        break;
    }

    printf("El valor de la carta es: %i\n", val);
    return 0;
}