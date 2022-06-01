#include <stdio.h>
#include <stdlib.h>

void carga(int[]);
void unir(int[], int[],int[]);

int main()
{
    int v1[5]={0},v2[5]={0},v3[10]={0},x;

    carga(v1);
    carga(v2);
    unir(v1,v2,v3);

    printf("\n");
    for(x=0;x<10;x++)
        {
            printf("%d\n",v3[x]);
        }
    return 0;
}
void carga(int vector[])
{
    int x;

    for(x=0;x<5;x++)
    {
        printf("Ingrese numero %d: ",x+1);
        scanf("%d",&vector[x]);
        fflush(stdin);
    }
};
void unir(int vector1[],int vector2[],int vector3[])
{
    int i;
    for(i=0;i<5;i++)
    {
        vector3[2*i]=vector1[i];
        vector3[2*i+1]=vector2[i];
    }
};
