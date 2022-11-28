#include <stdio.h>
int i = 0;
int length = 4;
float highest = 0;

void maxArrays(float value1, float value2) 
{
    if ( value1 > value2 )
    {
        highest = value1;
    }

    else {
        highest = value2;
    }
    
} 
float main() 
{
  float array1[] = {0.7, 3.3, 0.5, 10.3};
  float array2[] = {4.1, 1.5, 0.5, 2.3};
  float array3[] = {};
  for ( i=0; i < length; i++)
  {
     float getal1 = array1[i];
     float getal2 = array2[i];
   
    maxArrays(getal1, getal2);
    array3[i] = highest;
    
    
    
  }
  for (i=0; i < length; i++)
  {
    printf("%.6f", array3[i]);
    printf("\n");
  }
  
  return 0;
}
// pak getal array1[0]
//pak getal array2[0]
//Geef door aan max arrays

//maxarrays vergelijkt getallen
//hoogste getal wordt teruggegeven aan main
//getal komt in array 3


