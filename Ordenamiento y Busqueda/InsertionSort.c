//MARQUEZ ROMERO LUIS ANGEL
//INSERTIONSORT

#include <stdio.h>
#include <stdlib.h>

void VerArreglo(int arr[]){
	int i;
	for(i=0; i<9; i++) {
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arreglo[9] = {5,6,1,4,3,2,9,8,7};
	int i, j, aux;

	printf("INSERTION SORT\nMARQUEZ ROMERO LUIS ANGEL\n");
	VerArreglo(arreglo);
	printf("\n\nPROCESO ... \n");

	for (i = 1; i < 9; i++) {
		aux = arreglo[i];
		j = i-1;

		while(j >= 0 && arreglo[j] > aux){
			arreglo[j+1] = arreglo[j];
			j = j-1;
		}
		arreglo[j+1] = aux;
		VerArreglo(arreglo);
				printf("\t Aux= %d \n",aux);
	}

	printf("\nRESULTADO: \n");
	VerArreglo(arreglo);

	return 0;
}
