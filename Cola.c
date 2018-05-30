#include <stdlib.h>
#include <stdio.h>
 
typedef struct _nodo {
   int valor;
   struct _nodo *siguiente;
} tipoNodo;

typedef tipoNodo *pNodo;
 
/* Funciones con colas: */
void Anadir(pNodo *primero, pNodo *ultimo, int v);
int Leer(pNodo *primero, pNodo *ultimo);
  
int main()
{
   pNodo primero = NULL, ultimo = NULL;
 
   Anadir(&primero, &ultimo, 20);
   printf("Añadir(20)\n");
   Anadir(&primero, &ultimo, 10);
   printf("Añadir(10)\n");
   printf("Leer: %d\n", Leer(&primero, &ultimo));
   Anadir(&primero, &ultimo, 40);
   printf("Añadir(40)\n");
   Anadir(&primero, &ultimo, 30);
   printf("Añadir(30)\n");
   printf("Leer: %d\n", Leer(&primero, &ultimo));
   printf("Leer: %d\n", Leer(&primero, &ultimo));
   Anadir(&primero, &ultimo, 90);
   printf("Añadir(90)\n");
   printf("Leer: %d\n", Leer(&primero, &ultimo));
   printf("Leer: %d\n", Leer(&primero, &ultimo));
 
   system("PAUSE");
   return 0;
}
 
void Anadir(pNodo *primero, pNodo *ultimo, int v)
{
   pNodo nuevo;
  
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->valor = v;
   nuevo->siguiente = NULL;
   if(*ultimo) (*ultimo)->siguiente = nuevo;
   *ultimo = nuevo;
   if(!*primero) *primero = nuevo;
}
 
int Leer(pNodo *primero, pNodo *ultimo)
{
   pNodo nodo; 
   int v;    
    
  
   nodo = *primero;
   if(!nodo) return 0; 
   *primero = nodo->siguiente;
   v = nodo->valor; 
   free(nodo);
   if(!*primero) *ultimo = NULL;
   return v;
}