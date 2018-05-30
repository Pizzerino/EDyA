#include <stdlib.h>
#include <stdio.h>
 
typedef struct _nodo {
   int valor;
   struct _nodo *siguiente;
} tipoNodo;
 
typedef tipoNodo *pNodo;
typedef tipoNodo *Pila;
  
/* Funciones con pilas: */
void Push(Pila *l, int v);
int Pop(Pila *l);
  
int main()
{
   Pila pila = NULL;
   pNodo p;
  
   Push(&pila, 20);
   Push(&pila, 10);
   Push(&pila, 40);
   Push(&pila, 30);
 
   printf("%d, ", Pop(&pila));
   printf("%d, ", Pop(&pila));
   printf("%d, ", Pop(&pila));
   printf("%d\n", Pop(&pila));
 
   system("PAUSE");
   return 0;
}
 
void Push(Pila *pila, int v)
{
   pNodo nuevo;
  
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->valor = v;
    
   nuevo->siguiente = *pila;
   *pila = nuevo;
}
 
int Pop(Pila *pila)
{
   pNodo nodo; 
   int v;     
   nodo = *pila;
   if(!nodo) return 0; 
   *pila = nodo->siguiente;
   v = nodo->valor; 
   free(nodo);
   return v;
}