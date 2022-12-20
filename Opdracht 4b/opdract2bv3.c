#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
    typedef struct 
    {
        char* naam;
        int leeftijd;
    } Leerlingen;
    
    int keuze;
    printf("Hoeveel leerling moeten worden toegevoegd? ");
    scanf("%d", &keuze);
    Leerlingen* leerlingdata = malloc(keuze * sizeof *leerlingdata);

    for (int i = 0; i < keuze; i++)
    {
        leerlingdata[i].naam=(char*)malloc(sizeof(char*));

        printf("Vul hier de leerlingnaam in: ");
        scanf("%s",leerlingdata[i].naam);

        printf("Vul hier de leeftijd in: ");
        scanf("%d",&leerlingdata[i].leeftijd);

        printf("Leerling naam: %s, leeftijd: %d\n", leerlingdata[i].naam, leerlingdata[i].leeftijd );
    }
    for (int i = 0; i < keuze; i++)

        printf("Leerling naam: %s, leeftijd: %d\n", leerlingdata[i].naam, leerlingdata[i].leeftijd );
free(leerlingdata);
    return(0);
}