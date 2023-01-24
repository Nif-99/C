#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NAME_LENGTH 50

//Define structure

struct Leerlingen 
{
    char *naam[MAX_NAME_LENGTH];
    int *leeftijd;
};

int keuze = 1;
    
int main(void) {

    struct Leerlingen *leerlingen = NULL;

    // Allocate memory for the initial number of elements in the array
    int num_elements = 0;
    int capacity = 2;
    leerlingen = malloc(sizeof(struct Leerlingen) * capacity);

    while (keuze == 1)
    {
        printf("Voer de naam van de leerling in: ");
        scanf("%s", leerlingen[num_elements].naam);
        printf("Voer de leeftijd van de leerling in: ");
        scanf("%d", &leerlingen[num_elements].leeftijd);

        printf("%s %d\n", leerlingen[num_elements].naam, leerlingen[num_elements].leeftijd);

        num_elements++;

        printf("Wil je nog meer leerlingen toevoegen? (1 voor ja of 2 voor nee) ");
        scanf("%d", &keuze);

        if (num_elements == capacity) {
            printf("\n====================\n");
            printf("MAX CAPACITY REACHED\n");
            printf("====================\n");
            capacity *= 2;
            leerlingen = realloc(leerlingen, sizeof(struct Leerlingen) * capacity);
            printf("\n========================\n");
            printf("MAX CAPACITY REALLOCATED\n");
            printf("========================\n\n");
        }     
    }
    printf("\nIngevulde namen zijn: \n\n");
    for (int i = 0; i < num_elements; i++){
         printf("%s %d\n", leerlingen[i].naam, leerlingen[i].leeftijd);
    }

    free(leerlingen); 
    

}