#include <iostream>
using namespace std;

int main()
{
    // Declaramos la variables
    int x = 9;
    int y = 5;

    // Primero las aritméticas; son usadas para hacer operaciones matemáticas y cambiar valores
    cout << "Suma: x + y = " << x + y << endl;
    cout << "Resta: x - y = " << x - y << endl;
    cout << "Multiplicación: x * y = " << x * y << endl;
    cout << "División: x / y = " << x / y << endl;
    cout << "Módulo: x % y = " << x % y << endl;
    cout << "Incremento: x++ = " << x++ << endl;
    cout << "Disminución: y-- = " << y-- << endl;

    // Operadores racionales; compara valores para determinar si el operador es cierto o falso
    cout << "Operador \"es igual a\" (==): x == y" << endl;
    cout << "Operador \"es diferente que\" (=!): x =! y" << endl;
    cout << "Operador \"es menor que\" (<): x < y" << endl;
    cout << "Operador \"es mayor que\" (>): x > y" << endl;
    cout << "Operador \"es menor o igual que\" (<=): x <= y" << endl;
    cout << "Operador \"es mayor o igual que\" (>=): >= y" << endl;

    // Operadores lógicos; añade más condicionesa las comparaciones para comparaciones más amplias 
    cout << "Operador \"y\" (&&), todas las condiciones tienen que ser verdaderas para dar true: x > y && x < 10 && x >= 5" << endl;
    cout << "Operador \"o\" (||), una de las condiciones ellas tiene que ser verdadera para dar true: x >= y || x < 7 || x > 10 " << endl;
    cout << "Operador \"no\" (!()), la condición tiene que ser falsa para dar true; !(x > y)" << endl;

    // Operadores de asignación; asigna el valor de una variable
    int numero = 5;
    cout << "Asignar el valor (int <nombre> = <valor>;): int numero = 5;" << endl;
    (numero = 4);
    cout << "Re-asignar el valor ((<variable> = <valor>); : (numero = 4);" << endl;
    cout << "Incrementar el valor (+=): numero += 10 = " << (numero += 10) << endl;
    cout << "Disminuir el valor (-=): numero -= 10 = " << (numero -= 5) << endl;
    cout << "Multiplicar el valor (*=): numero *= 4 = " << (numero *= 4) << endl;
    cout << "Dividir el valor (/=): numero /= 2 = " << (numero /= 2) << endl;
    cout << "Modular el valor (%=): numero %= 6 = " << (numero %= 6) << endl;

    /* Operadores de bits; Las operaciones de bit a bit en C++ manipulan datos enteros directamente 
    a nivel de bits individuales 0s y 1s, lo que permite optimizar la memoria, acelerar cálculos, 
    manejar hardware de bajo nivel y realizar enmascaramiento de datos. Son esenciales para tareas eficientes 
    donde el espacio es limitado. (Por aprender)*/

    // Estructoras de control: Condicionales

    // Si (If), si la/s condición/es dan "True", entonces se realiza la acción.
    if (x > y)
    {
        cout << "\"X\" es mayor que \"Y\"" << endl;
    }
    // Si no (Else if), si la estructura anterior no cumplió y dió "False", entonces se revisa este.
    else if (x == y)
    {
        cout << "\"X\" y \"Y\" son iguales" << endl;
    }
    // Entonces (Else), si no se ha cumplido ninguna condición, entonces se da un fin.
    else
    {
        cout << "\"Y\" es mayor que \"X\"" << endl;
    }

    /* Cambiar (Switch), se revisa por caso si un objetivo cumple con un caso para iniciar la acción, 
    si no pasa al siguiente hasta que se de un "break" o un "default" */
    (numero = 4);
    switch(numero)
    {
        // Caso (Case), depende del valor del caso es si se va a iniciar la acción o no.
        case 1:
        cout << "Numero vale 1" << endl;
        // Descansar (Break), en caso que el caso se haya resuelto, el "break" detiene por completo el switch
        break;
        case 2:
        cout << "Numero vale 2" << endl;
        break;
        case 3:
        cout << "Numero vale 3" << endl;
        break;
        // Predeterminado (Default), si ningún caso se cumple, entonces se cumple una acción predeterminada
        default:
        cout << "Numero es mayor que los casos" << endl; 
    }

    // Estructuras de control: Cíclicas

    /* Por (For): esta estructura cíclica tiene un valor inicial, valor final y valor por el que se suma por ciclo
    permite cumplir funciones iterativas (Por entero) hasta que el bucle acabe en el valor final */
    for (int i = 0 /* Valor inicial */; i <= 10 /* Valor final */; i++ /* Valor por el que se suma */)
    {
        if (i <= 5)
        {
            cout << "\"I\" es menor o igual que 5, \"I\" vale " << i << endl;
        }
        else if (i <= 9)
        {
            cout << "\"I\" es mayor o igual que 9, \"I\" vale " << i << endl;
        }
        else
        {
            cout << "\"I\" vale " << i << endl;
        }
    }
    
    /* Mientras (While): esta estructura cíclica ejecuta un bloque de código mientras se cumple una condición 
    ya establecida. */
    (numero = 0);
    while (numero <= 10 /* Condición */)
    {
        cout << "El número vale " << numero << endl;
        (numero++);
    }
    
    /* Hacer mientras (Do - While): esta estructura cíclica (Variante de while) que ejecuta primero un bloque de código
    y luego revisa la condición de "While", es útil para revisar algo antes de empezar. */
    do {
        if (numero > 5) {
            cout << "El número es mayor que 5, se va a re-asignar a 0" << endl;
            (numero = 0);
        }
        else {
            cout << "El valor del número es menor que 5!, vale " << numero << endl;
            (numero++);
        }
    }
    while (numero < 5);
    
    /* Crea un programa que imprima por consola todos los números comprendidos
    entre 10 y 55 (incluidos), pares, y que no son ni el 16 ni múltiplos de 3. */
    for (int i = 10; i <= 55; i += 2) {
        if (!(i == 16 || i % 3 == 0)) {
            cout << "El valor de \"I\" es: " << i << endl;
        }
        else if (i > 52) {
            cout << "Finalizamos \"I\" con: " << (i = 55) << endl;
        }
        else {
            continue; // La función "Continuar" (continue) salta al siguiente paso
        }
    }
    return 0;
}