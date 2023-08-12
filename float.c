#include <stdio.h>
int main() {

    //* Esempio 1: Dichiarazione e assegnazione
    float num = 3.14f; // dichiarazione e assegnazione di una variabile float
    printf("Il valore di num è: %f\n", num); // stampa la variabile

    //* Esempio 2: Modifica del valore di una variabile float
    float num = 3.14f;
    printf("Il valore originale di num è: %f\n", num); // stampa il valore originale
    num = 2.71f; // modifica il valore di num
    printf("Il nuovo valore di num è: %f\n", num); // stampa il nuovo valore

    //* Esempio 3: Uso di variabili float in espressioni
    float num1 = 3.14f;
    float num2 = 2.71f;
    float result = num1 * num2; // moltiplica due variabili float
    printf("Il risultato della moltiplicazione è: %f\n", result); // stampa il risultato

    //* Esempio 4: Formattazione dell'output di float con printf
    float num = 3.14159f;
    printf("Stampa con due cifre decimali: %.2f\n", num); // stampa il numero con due cifre decimali
    return 0;

}