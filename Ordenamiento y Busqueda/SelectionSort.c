//MARQUEZ ROMERO LUIS ANGEL
//SELECTIONSORT

#include <stdio.h>
#include <stdlib.h>

void VerArreglo(int arr[]){
	int i;
	for(i=0; i<9; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arreglo[9] = {5,6,1,4,3,2,9,8,7};
	int i, j, aux, min;

	printf("SELECTION SORT\nMARQUEZ ROMERO LUIS ANGEL\n");
	VerArreglo(arreglo);
	printf("\n\nPROCESO ... \n");

	for(i = 0; i < 9; i++) {
		min = i;
		for(j = i+1; j < 9; j++) {
			if(arreglo[j] < arreglo[min]) {
				min = j;
			}
		}
			aux = arreglo[i];
			arreglo[i] = arreglo[min];
			arreglo[min] = aux;

			VerArreglo(arreglo);
				printf("\n");
	}

	printf("\nRESULTADO: \n");
	VerArreglo(arreglo);

	return 0;
}
