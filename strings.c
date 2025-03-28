#include <stdio.h>
#include <string.h>

int main(){

        /*las cadenas de texto pueden ser generadas de dos formas diferentes:

        1) con un array de caracteres, el cual puede ser modificado */

        char name[]="John";             

        /*Usando punteros, el cual es un tema mas avanzado, y este es de solo lectura*/

        char *nombre1="Jean Paul";

        /*Si ponemos un indice en el array, notemos que debemos poner una unidad mas a las que ya tiene, debido al lugar
        que ocupa un caracter especial que indica el fin de string '\0'*/

        char nombre[13]="Lautaro Brun";

        /*printear un string:*/
        int age=20;
        printf("Mi nombre es %s y tengo %d anios\n",nombre,age);

        /*como vemos la longitud de una cadena? con la funcion str lenght, que esta en <string.h>*/

        printf("la longitud de la cadena es: %d\n",strlen(nombre1));

        /*vemos que no cuenta el '\0'*/

        /*comparacion de strings: Retorna el valor 0 si son iguales, o un numero diferente si son diferentes*/

        if ((strcmp("John",name))==0)
        {
            printf("Hi John!");
        }
        else{
            printf("you are not john!!");
        }
        


    return 0;
}