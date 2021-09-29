#include<stdio.h>

#define a 15

void capturaarreglo(int e, int q, int w[a][a]);
void busqueda(int se, int q, int w[a][a], int *men, int *pos);

int b[a][a], r, c, sr=0, menor, posicion, i;

int main()
{
    printf("¿Cuantos renglones?: ");
    scanf("%d", &r);
    printf("¿Cuantas columnas?: ");
    scanf("%d", &c);
    capturaarreglo(r, c, b);
    for(i=0; i<r; r++)
    {
       busqueda(sr, c, b, &menor, &posicion);
       printf("El numero menor del renglon %d es %d y se encuentra en la posicion [%d][%d]\n", menor, sr, posicion);
       sr+=1;
    }
}

void capturaarreglo(int e, int q, int w[a][a])
{
    int i, j;
    for(i=0; i<e; i++)
        for(j=0; j<q; j++)
            {
                 printf("Arreglo[%d][%d]: ", i, j);
                 scanf("%d", &w[i][j]);
            }
}

void busqueda(int se, int q, int w[a][a], int *men, int *pos)
{
    int i;
    for(i=0; i<q; i++)
            {
               if(i == 0)
                  {
                        *pos=i;
                        *men=w[se][i];
                  }
               else
                      if(w[se][i]<*men)
                       {
                         *men=w[se][i];
                         *pos=i;
                       }
            }
}
