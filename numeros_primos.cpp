#include<stdio.h>

int main() {
    int primo;
    int evaluador=1;
    int contador=0;
    printf("Ingrese un numero:(Ingrese %d para terminar)\n",0);
    scanf("%d",&primo);
    while (primo!=0)
    {
        while(evaluador<=primo)
        {
            if (primo%evaluador==0)
            {
                contador+=1;
            }
            evaluador+=1;
        }
        if (contador==2)
            printf("El numero es primo\n");
        else
            printf("El numero no es primo\n");
        contador=0;
        evaluador=1;
        printf("Ingrese un numero:(Ingrese %d para terminar)\n",0);
        scanf("%d",&primo);
    }
    return 0;
}
