//PROGRAMA QUE CALCULA ROMANOS A NUMEROS REALES
//MARQUEZ ROMERO LUIS ANGEL
#include <stdio.h>
#include <string.h>

int main()
{
    int suma=0, i, Real[500]={0};
    char Romano[500];

    printf("||CONVERSOR DE ROMANOS A REALES||");
    printf("\nIntroduzca el numero Romano : ");
    scanf("%s",Romano);

    for (i=0;i<strlen(Romano);i++)
    {
        switch(Romano[i])
        {
          case 'I' : Real[i] = 1;break;
          case 'V' : Real[i] = 5;break;
          case 'X' : Real[i] = 10;break;
          case 'L' : Real[i] = 50;break;
          case 'C' : Real[i] = 100;break;
          case 'D' : Real[i] = 500;break;
          case 'M' : Real[i] = 1000;break;
          default:
            printf("El numero no es Romano, GAME OVER\n");
            return (-1); break;
        }
      }

    for(i = 0;i < strlen(Romano);i++)
    {
        if(Real[i] < Real[i+1])
          suma -= Real[i];
        else
          suma += Real[i];
    }
    printf("\nRomano: %s || Real: %d\n",Romano,suma);

    return (0);
}
