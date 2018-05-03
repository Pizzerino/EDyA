//MARQUEZ ROMERO LUIS ANGEL
//BUSQUEDA BINARIA O BIN SORT
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int A[1000];
    int inf ,sup ,mit ,dato ,n=1000 ,cont=0, i;

    for(i=0;i<1000;i++)
    {
        A[i]=i;
    }

    printf("BUSQUEDA BINARIA\nMARQUEZ ROMERO LUIS ANGEL\n");
    printf("Dame un numero a buscar: ");
    scanf("%d",&dato);
    inf=0;
    sup=n;
    while (inf<=sup)
    {
        cont++;
        mit=(inf+sup)/2;
        if (A[mit]==dato)
        {
            printf("dato %d encontrado posicion %d",dato,mit);
            break;
        }
        if (A[mit]>dato)
        {
            sup=mit;
            mit=(inf+sup)/2;
        }
        if (A[mit]<dato)
        {
            inf=mit;
            mit=(inf+sup)/2;
        }

    }
printf("\n\nEl programa dio '%d' iteraciones", cont);
return 0;
}
