#include <stdio.h>
#include <math.h>

int oplossing;
int diameter;

// omtrek = diameter * PI
void berekeninger(int value)
{
    oplossing = value * 3.14159265358979323846; 
    //printf("dit is een test berichtje");
}

int main()
{
    
    printf("geef een diameter: ");
    scanf("%d", &diameter);
    printf("je diameter is: %d \n", diameter);
    berekeninger(diameter);
    printf("%d", oplossing);
}