#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "library.h"

int main()

{
  int getal;
  printf("Kies een getal: \n");
  scanf("%d", &getal);
  printf("je Keuze is: %d \n", getal);


  if (getal == 2){

    printf("U heeft optie 2 gekozen, geniet van deze symbolen \n"); 
    plusmin();
  }  
   
  else if (getal < 0){
    printf("Misinput, Burrrrrrrrrrrrrrrr");
    sleep(1);
    exit(0);
    
  }
  else
  {
    printf("u heeft optie %d gekozen");
  }

  sleep(5);    
}