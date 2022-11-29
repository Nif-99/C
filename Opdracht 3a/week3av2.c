#include <stdio.h>

int count = 0;
float highest_value= 0.0;
int length = 4;
void maxArrays(float *value1, int arraysize, float *value2, float *value3);
float print_array(float *print1, int arraysize);

float main()
{

    float array1[] = {0.7, 3.3, 0.5, 10.3};
    float array2[] = {4.1, 1.5, 0.5, 2.3};
    float array3[4];
    
    printf("Dit is array 1: \n");
    print_array(array1, 4);

    printf("Dit is array 2: \n");
    print_array(array2, 4);

    printf("Dit is array 3: \n");
    maxArrays(array1, 4, array2, array3);
    for (count=0; count < length; count++)
  {
    printf("%.6f", array3[count]);
    printf("\n");
  }

  
  return 0;

}

void maxArrays(float *value1, int arraysize, float *value2, float *value3)
{
  for (int i = 0; i<arraysize; i++)
  {
   if ((value1[i]) > (value2[i]))
   {
        
        float highest_value = (value1[i]);
        value3[i] = highest_value;
   }
    else{
        float highest_value = (value2[i]);
        value3[i] = highest_value;
    }
  }
}   

float print_array(float *print1, int arraysize){
    for (int i = 0; i < arraysize; i++)
    {
        printf("%f\n", print1[i]);
    }
}