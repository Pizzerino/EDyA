//PROGRAMA QUE GENERE UNA PIRAMIDE DE ASTERISCOS
//MARQUEZ ROMERO LUIS ANGEL
#include <stdio.h>
#include <conio.h>

int main()
{
    int n,fila,col;
    printf("|| PROGRAMA QUE GENERE UNA PIRAMIDE DE ASTERISCOS ||");
    printf("\n|| Tamano de la piramide: " ) ;
    scanf("%d",&n ) ;

    for(fila=1;fila<=n;fila++)
        {
            for(col=1;col<=n-fila;col++)
            {
                printf(" ") ;
            }

            for(col=1;col<=2*fila-1;col++)
            {
                printf("*") ;
            }

        printf("\n") ;
        }

}
