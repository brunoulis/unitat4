# unitat4 al hacer el push con el visual code se me olvido y sin querer que cree otra rama
1. Hemos añadido los ficheros clean,calc.c,calcula.c,calc.h,hola.c,gitignore y Makefile
Los cuales tienen el contenido necesario para la practica las cuales automatizaremos con el fichero makafile y haremos un ejemplo de compilacion con cada con el hola.c
contenido del fichero hola.c
~~~git
#include <stdio.h>

int main()
{
    printf("HOLA MUNDO\n");
    return 1;

}
~~~
~~~git
gcc -Wall -g hola.c -o hola
~~~
de esta manera compilaremos el fichero hola.c
2. Aqui vemos calc.c
~~~git
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
int mayor (int a, int b){

    if (a<b){ 
        return a;
    }else{
        return b;
    }
}
~~~
3. contenido del fichero calcula.c
~~~git
#include <stdio.h>
#include "calc.h"

int main(){
    int a;
    int b;
    printf("introduce dos numeros");
    scanf("%d %d",&a,&b);
    printf("la suma entre %d y %d vale %d\n",a,b,suma(a,b));
    printf("la resta entre %d y %d vale %d\n",a,b,resta(a,b));
    printf("la multiplicacion entre %d y %d vale %d\n",a,b,multiplicar(a,b));
    printf("la division entre %d y %d vale %d\n",a,b,dividir(a,b));
    printf("El mayor  %d y %d es %d\n",a,b, mayor(a,b));
    return 0;
}
~~~
4. contenido del fichero calc.h
  ~~~git
  #ifndef MYCALC
#define MYCALC

int suma(int a, int b);
int resta(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);
int mayor(int a, int b);
#endif
  ~~~
5.Estos tres fincheros contendran variable instruciones y la muestra del resultado por pantalla pero esta dividio en estos ficheros y con el make los compilaremos.
6. Aqui vemos que el makefile funciona correctamente creando el fichero calc.o para despues ejecutar el calcula con el cual creamos el calcula.o.Despues con el clean podemos borrar los ficheros creados anteriormente.El dist previamente necesitara los objetivos clean y calcula. Las órdenes que realiza son:
 rm -rf ../dist;: Borra, si existe, la carpeta /dist creada previamente en el directorio
superior.
 mkdir -p ../dist/usr/bin: Crea en el directorio padre del que estamos la ruta /dist/usr/
bin
 cp calcula ../dist/usr/bin/: Copia el ejecutable calcula dentro de la carpeta que hemos
creado.
 Con esto, ya tenemos la carpeta creada con los ejecutables.
targz Requierira previamente el objetivo clean. Las órdenes que realiza son:
 mkdir -p source: Crea la carpeta source en el directorio actual.
 cp *.c *.h Makefile source: Copia todos los archivos .c, .h y Makefile en la carpeta
source que hemos creado.
 tar -cvf calcula.tar source: Crea el archivo calcula.tar a partir de la carpeta
source.
 gzip calcula.tar: Comprimeiz en zip el archivo calcula.tar.
 rm -rf calcula.tar: Borra el archivo intermedio tar.gz.
 rm -rf source: Borra el directorio temporal source.

~~~git
make calc.o
make calcula
make clean
make dist
make targz
make install
~~~
