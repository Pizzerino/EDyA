//PROGRAMA QUE GENERE LA PIRAMIDE DE PASCAL
//MARQUEZ ROMERO LUIS ANGEL
#include <stdio.h>

int main()
{
    int piramide[100], fila, col, x , n;
    printf("Numero de la piramide a mostrar: ");
    scanf("%d",&n);
    x=0;

    for(fila=1; fila<=n; fila++)
    {
        for(col=x; col>=0; col--)
        {
            if(col==x || col==0)
                piramide[col]=1;
            else
                piramide[col]=piramide[col]+piramide[col-1];
        }
        x++;
        printf("\n");

        for(col=1; col<=n-fila; col++)
            printf("  ");

        for(col=0; col<x; col++)
            printf("%3d ",piramide[col]);
    }
    return 0;
}
