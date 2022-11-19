#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura; //Definir la variable altura (1-8) con el input del usuario
    do
    {
        altura = get_int("Height: ");
    }
    while (altura < 1 || altura > 8);  
    for (int fila = 0; fila < altura; fila++) 
    
    {
        for (int punto = 0 ; punto < (altura - fila - 1) ; punto++) //Definir espacio previo
        {
            printf(" ");
        }
        for (int ancho = 0; ancho < fila + 1; ancho++) //Definir la variable ancho en relación con la altura (input del usuario)
        {
            printf("#");
        }
        printf("\n");
    }
}
