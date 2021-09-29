#include<stdio.h>

#define a 15

void capturaarreglo(int q, int w[a]);
void busqueda(int q, int w[a], int *men, int *pos);

int b[a], c, menor, posicion;

int main()
{
    printf("¿Cuantos datos tendra el arreglo unidimensional?: ");
    scanf("%d", &c);
    capturaarreglo(c, b);
    busqueda(c, b, &menor, &posicion);
    printf("El numero menor del arreglo es %d y se encuentra en la posicion %d", menor, posicion);
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

void busqueda(int q, int w[a], int *men, int *pos)
{
    int i;
    for(i=0; i<q; i++)
        {
        if(i == 0)
        {
             *pos=i;
             *men=w[0];
        }
        else
           if(w[i]<*men)
             {
                *men=w[i];
                *pos=i;
             }
        }
}
