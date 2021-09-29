#include<stdio.h>

#define a 15

void capturaarreglo(int q, int w[a]);
void busqueda(int q, int w[a], int *may, int *pos);

int b[a], c, mayor, posicion;

int main()
{
    printf("¿Cuantos datos tendra el arreglo unidimensional?: ");
    scanf("%d", &c);
    capturaarreglo(c, b);
    busqueda(c, b, &mayor, &posicion);
    printf("El numero mayor del arreglo es %d y se encuentra en la posicion %d", mayor, posicion);
}

void capturaarreglo(int q, int w[a])
{
    int i;
    for(i=0; i<q; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &w[i]);
    }
}

void busqueda(int q, int w[a], int *may, int *pos)
{
    int i, MAY=0;
    for(i=0; i<q; i++)
        if(w[i] > MAY)
          {
             *pos=i;
              MAY=w[i];
          }
    *may=MAY;
}
