#include <stdio.h>
#include <stdlib.h>

#define INT_MIN

struct Pila{
	int tope;
	int capacidad;
	int* arreglo;
	};

struct Pila* crearPila(int capacidad);
int estaLlena(struct Pila* pila);
int estaVacia(struct Pila* pila);
void PUSH(struct Pila* pila, int elemento);
int POP(struct Pila* pila);
int PEEK(struct Pila* pila);
void imprimir(struct Pila* pila);
int buscar(struct Pila* pila, int valor);
int numElementos(struct Pila* pila);

int main()
{
	struct Pila* pila = crearPila(5);
	PUSH(pila, 100);
	PUSH(pila, 200);
	PUSH(pila, 300);
	PUSH(pila, 400);
	PUSH(pila, 500);
	POP(pila);
	POP(pila);
	PUSH(pila, 600);
	PUSH(pila, 700);
	imprimir(pila);

	printf("La pila tiene %i elementos\n",numElementos(pila));
	if (estaLlena(pila))
		printf("La pila esta llena");

	return 0;
}

struct Pila* crearPila(int capacidad){
	struct Pila* pila = (struct Pila*)malloc(sizeof(struct Pila));
	pila->capacidad = capacidad;
	pila->tope = -1;
	pila->arreglo = (int*)malloc(pila->capacidad*sizeof(int));
	return pila;
	}

int estaLlena(struct Pila* pila){
	return pila->tope == pila->capacidad-1;
	}

int estaVacia (struct Pila* pila){
	return pila->tope == -1;
	}

void PUSH(struct Pila* pila, int elemento){
	if (estaLlena(pila))
		return;
	pila->arreglo[++pila->tope] = elemento;
	}

int POP(struct Pila* pila){
	if (estaVacia(pila))
		return INT_MIN;
	return pila->arreglo[pila->tope--];
	}

int PEEK(struct Pila* pila){
	int val = POP(pila);
	PUSH(pila,val);
	return val;
	}

void imprimir(struct Pila* pila){
    int i;
	for (i = 0; i <= pila->tope; i++)
		printf("%i\n", pila->arreglo[i]);
	}

int buscar(struct Pila* pila, int valor){
    int i;
	for (i = 0; i <= pila->tope; i++)
		if (pila->arreglo[i] == valor)
			return i;
	return -1;
	}

int numElementos(struct Pila* pila){
	return pila->tope+1;
	}
