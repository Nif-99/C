#include <stdio.h>
int count = 0;
char string;
void verschuiver();

int main()
{
    FILE *bestand;
    bestand = fopen("alfabet.txt","r");
    
    if (bestand){
        while ((string = getc(bestand)) !=EOF)
        {
            
            putchar(string);
            count++;
        }
    }
    verschuiver();
    printf("\nHet aantal karakters zijn: %d", count);
    fclose(bestand);
    
    return 0;
}

void verschuiver()
{
    FILE *bestand;
    FILE *bestand2;
    bestand = fopen("alfabet.txt", "r");
    bestand2 = fopen("encrypted.txt", "w");
    
    char ch = fgetc(bestand);
    while (ch != EOF){
        
        "%c", ch++;
        fputc(ch, bestand2);

        ch = fgetc(bestand);

    }
    printf("\n Alle karakters zijn succesvol gekopieerd ");

    fclose(bestand);
    fclose(bestand2);
}
   


