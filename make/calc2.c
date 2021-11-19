#include <stdio.h>

int suma(int a, int b)
{
    return a + b;
}

int resta(int a, int b)
{
    return a - b;
}
int multiplicar(int a, int b)
{
    return a * b;
}
int dividir(int a, int b)
{
    return a / b;
}

int main(){
    int a;
    int b;
    printf("introduce dos numeros");
    scanf("%d %d",&a,&b);
    printf("la suma entre %d y %d vale %d\n",a,b,suma(a,b));
    printf("la resta entre %d y %d vale %d\n",a,b,resta(a,b));
    printf("la multiplicacion entre %d y %d vale %d\n",a,b,multiplicar(a,b));
    printf("la division entre %d y %d vale %d\n",a,b,dividir(a,b));
}
