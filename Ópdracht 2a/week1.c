#include <stdio.h>
#include "library.h"



int plusmin( void )
{
    int a = 1;
    char star = '*';
    char dash = '-';
    while ( a <= 10 )
    {
        for (ctr = 0 ; ctr < 10; ctr++ )
        {
            print_function( star );
            print_function( dash );
            printf("\n");
        }
        a++;
    }
    return 0;
}


void print_function ( char letter )
{
    for (ctr = 0; ctr < 9; ctr++) 
    {
        printf("%c", letter);
    }
}
