#include<stdio.h>

#define a 15

void capturaarreglo(int q, int w[a]);
int busqueda(int e, int q, int w[a]);

int b[a], c, n, p;

int main()
{
    printf("¿Cuantos datos tendra el arreglo unidimensional?: ");
    scanf("%d", &c);
    printf("Numero a buscar: ");
    scanf("%d", &n);
    capturaarreglo(c, b);
    p = busqueda(n, c, b);
    if(p!=-1)
        printf("El numero se encuentra en la posicion %d", p);
    else
        printf("El numero no se encuentra en el arreglo");
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

int busqueda(int e, int q, int w[a])
{
    int i, centi=-1, posi;
    for(i=0; i<q; i++)
        {
        if(w[i] == e && centi==-1)
             posi=i;
        }
    return posi;
}
