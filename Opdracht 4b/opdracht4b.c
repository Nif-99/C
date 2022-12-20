#include <stdio.h>



int main()
{
    int boolean = 1;
    char keuze;
    char tekstofgetal;
    struct informatie
    {
        char naam;
        int leeftijd;

    };
    
    while (boolean = 1 )
    {
        printf("wil je iets toevoegen? \n");
        scanf("%s", &keuze);
        if (keuze == "ja")
        {
            printf("is je informatie tekst of een getal? \n");
            scanf("%s", &tekstofgetal);
            if (tekstofgetal == "tekst")
            {
               //voeg hier een char toe
            }            
            else if (tekstofgetal == "getal")
            {
                // voeg hier een int toe
            }
            else 
            {
                printf("misinput \n");
            }
        }
        else if (keuze == "nee")
        {
            boolean = 0;
            break;
        }
        else
        {
            printf("misinput\n");
        }
    }


    return 0;
}
