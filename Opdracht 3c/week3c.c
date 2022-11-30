#include <stdio.h> 
#include <string.h>

int main()
{



    struct leerling
    {
        char naam[32];
        int leeftijd;
        struct opleiding{
            char opleidingnaam[32];
	        int instroomjaar;

        }opleidinginfo;
    }leerlinginfo;

    struct leerling account;

    {
        printf("wat is je naam?\n");
        scanf("%s", leerlinginfo.naam);
        
        printf("wat is je leeftijd? (0-99)\n");
        scanf("%d", &leerlinginfo.leeftijd);

        printf("wat is je opleiding?)\n");
        scanf("%s", &leerlinginfo.opleidinginfo.opleidingnaam);
        
        printf("wat is je instroomjaar?)\n");
        scanf("%d", &leerlinginfo.opleidinginfo.instroomjaar);
        
        printf("jij bent %s, bent %d jaar oud, doet de opleiding %s en in instroomjaar %d", leerlinginfo.naam, leerlinginfo.leeftijd, leerlinginfo.opleidinginfo.opleidingnaam, leerlinginfo.opleidinginfo.instroomjaar);
        return(0);
    };
};