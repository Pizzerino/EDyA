//MARQUEZ ROMERO LUIS ANGEL
//BUBBLESORTMEJORADO


#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0


void VerArreglo(int arr[]){
	int i;
	for(i=0; i<9; i++) {
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arreglo[9] = {5,6,1,4,3,2,9,8,7};
	int i, j, aux, n = 9;
	bool cambiado;

	printf("BUBBLE SORT MEJORADO\nMARQUEZ ROMERO LUIS ANGEL\n");
	VerArreglo(arreglo);
	printf("\n\nPROCESO ... \n");

	for(i = 0; i < n-1; i++){
		cambiado = false;
		for(j = 0; j < n-i-1; j++){
			if(arreglo[j] > arreglo[j+1]){
				aux=arreglo[j];
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=aux;
				cambiado = true;

				VerArreglo(arreglo);
				printf("\n");
			}
		}
	}
	printf("\nRESULTADO: \n");
	VerArreglo(arreglo);

	return 0;
}

