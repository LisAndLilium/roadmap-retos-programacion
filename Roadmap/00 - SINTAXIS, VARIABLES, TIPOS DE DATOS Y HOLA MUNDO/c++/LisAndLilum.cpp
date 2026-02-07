#include <iostream>
#include <string>

using namespace std; /* Mala práctica para proyectos grandes, mejor usar "using <namespace & función>" 
o el calificador específico (<namespace>::<función>) para evitar colisiones y ambigüedades en el código */

// Este lenguaje no lleva lenguaje oficial

// Comentario de una línea

/*
Comentario de varias líneas
*/

int main()
{
    int numero = 1;
    const int numero_constante = 2;

    // Números enteros (Signed)
    short corto = 32767; // 16 bits
    int entero = 2147483647; // 32 bits o 16 bits (Depende del compilador)
    long largo = 2147483647L; // 32 bits
    long long gigante = 9223372036854775807LL; // 64 bits

    /* Las variables "signeds" (Con signo) son los números que llevan signos positivo y negativo
    por lo que su variedad se divide en dos del negativo al positivo */

    // Números enteros (Unsigned)
    short unsigned corto_sin_signo = 65535U;
    int unsigned entero_sin_signo = 4294967295U;
    long unsigned largo_sin_signo = 4294967295UL;
    long long unsigned gigante_sin_signo = 1844674407370955169ULL;

    /* Las variables "unsigneds" (Sin signo) son los números que solo están en el rango positivo 
    por lo que los números positivos alcanzan el doble que los signeds sacrificando los números negativos*/

    // Números decimales
    float decimal_de_7_digitos = 3.1415926F;
    double decimal_de_14_digitos = 3.14159265358979;
    long double decimal_de_18_digitos = 3.141592653589793238L;

    // Carácteres
    char caracter = 'A'; // El valor entero del carácter 'A' es 65
    char caracter_ascii = 65; /* Poner el valor entero ASCII del carácter hará que la consola imprima 
    el producto con el valor correspondiente */

    // Cadenas de textos
    string cadena_de_texto = "Hola, ";
    char arreglo_de_char[] = "C++.";

    // Booleanos
    bool booleano_verdadero = true;
    bool booleano_falso = false;

    //Los char pueden ser convertidos en números enteros
    cout << int(caracter) << endl;
    cout << cadena_de_texto + arreglo_de_char << endl;
    cout << caracter_ascii << endl;
    return 0;
}