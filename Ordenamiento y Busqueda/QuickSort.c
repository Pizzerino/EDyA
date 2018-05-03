//QUICKSORT
//MARQUEZ ROMERO LUIS ANGEL
#include <stdio.h>
#include <stdlib.h>

void quicksort(int arreglo[],int primero,int ultimo)
{
    int i,j,temporal,pivote;

    i = primero;
    j = ultimo;
    pivote = arreglo[(i+j)/2];

    do{
        while(arreglo[i]<pivote)i++;
        while(arreglo[j]>pivote)j--;
        if(i <=j)
        {
            temporal= arreglo[i];
            arreglo[i]=arreglo[j];
            arreglo[j]=temporal;
            i++;
            j--;
        }
        VerArreglo(arreglo);
        printf("\n");

    }while(i<=j);
    if(primero<j)
        quicksort(arreglo,primero,j);
    if(ultimo>i)
        quicksort(arreglo,i,ultimo);

}

void quicksort_a(int arreglo[],int n)
{
    quicksort(arreglo,0,n-1);
}

void VerArreglo(int arr[]){
    int i;
    for(i=0; i<9; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int arreglo[9] ={5,2,1,7,4,3,8,9,6};
    int n = 9;
    int i;
    printf("QUICK SORT\nMARQUEZ ROMERO LUIS ANGEL\n");
    VerArreglo(arreglo);
    printf("\n\nPROCESO ... \n");

    quicksort_a(arreglo,n);

    printf("RESULTADO: \n");
    VerArreglo(arreglo);


    return 0;
}
