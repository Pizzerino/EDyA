//MARQUEZ ROMERO LUIS ANGEL
//SHELLSORT
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
	int i, j, aux, intervalo, n = 9;
	intervalo = n/2;

	printf("SHELL SORT\nMARQUEZ ROMERO LUIS ANGEL\n");
	VerArreglo(arreglo);
	printf("\n\nPROCESO ... \n");

	for( intervalo = n/2; intervalo > 0; intervalo /=2){
		for( i = intervalo; i < n; i+=1){
			aux=arreglo[i];
			for(j = i; j >= intervalo && arreglo[j-intervalo] > aux; j-= intervalo){
				arreglo[j] = arreglo[j-intervalo];
			}
			VerArreglo(arreglo);
            printf("\n");

			arreglo[j]= aux;
		}
	}
	printf("\nRESULTADO: \n");
	VerArreglo(arreglo);

	return 0;
}

