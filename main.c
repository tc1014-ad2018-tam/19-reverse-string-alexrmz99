/*  This program will display the string given by the user in reverse order.
 *
 *
 *  Alejandro Ramírez Michel
 *  18 de octubre de 2018
 *
 * */

#include <stdio.h>
#include <string.h>

int main() {
    //establezco variables
    char string[100];

    //le pido al usuario que escriba algo
    printf("Write anything you want: ");
    fgets(string, sizeof(string), stdin);

    printf("\nYou wrote: %s", string);
    printf("\nIf written in backwards: ");

    //establezco condición para imprimir al revés
    for (int i = ((int) strlen(string)) - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }

    return 0;
}