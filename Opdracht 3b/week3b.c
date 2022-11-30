#include <stdio.h>
#include <string.h>  



char main()
{
    int count = 0;
    char zin[100];

    printf("typ een leuke zin: \n");
    gets(zin);
    for (int i = 0; i < strlen(zin); i++)
    {
       if(zin[i] != ' ')
       {
        count++;
       }
        
    }
    
    printf("Het totale aantal karakters is: %d", count);
    
    return 0;
}
