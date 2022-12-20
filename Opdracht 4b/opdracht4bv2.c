#include <stdio.h> 
#include <string.h>


int main()
{

    struct persoon
    {
        char naam[32];
        int leeftijd[2];
        

    }persooninfo;
    

    struct persoon account;

    {
        printf("wat is je naam?\n");
        scanf("%s", &persooninfo.naam);
        
        printf("wat is je leeftijd? (0-99)\n");
        scanf("%d", &persooninfo.leeftijd);

        printf("Wil je nog een waarde toevoegen? (1 voor ja, 2 voor nee) ");
        int keuze;
        scanf("%d", &keuze);
        if (keuze == 1)
        {
            printf("de keuze was ja");

            
        }
        else{
            printf("de keuze was nee");
        }
        

    };
};