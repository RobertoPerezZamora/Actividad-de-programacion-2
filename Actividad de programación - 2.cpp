/*************************************************************

NOMBRE: Roberto perez Zamora
FECHA: 05/02/24
PROGRAMA: Actividad de programacion - 2.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Realizar un programa en C/C++ en donde
pongas en práctica al menos  6 caracteres de escape y 6 cadenas de control de tipos de salida.

*************************************************************/

// Bibliotecas
// Incluir biblioteca estandar
#include <iostream>

// Incluir espacio de nombres
using namespace std;

// Funcion principal
int main() 
{
    //Mostrar linea divisora
cout << "====================" << endl;

    //Mostrar texto de segmento Caracteres de Escape
    cout << "Caracteres de Escape" << endl;

    //Mostrar linea divisora
cout << "---------------------" << endl;
    // Caracteres de escape

    // Tabulacion horizontal
    cout << "Tabulacion\thorizontal." << endl;

//Mostrar Linea divisora
cout << "---" << endl;

    // Nueva línea
    cout << "Nueva\nlinea." << endl; 

//Mostrar Linea divisora
cout << "---" << endl;

    // Retorno de carro
    cout << "Retorno\rcarro." << endl; 

//Mostrar Linea divisora
cout << "---" << endl;

    // Retroceso
    cout << "Retroceso\b Creo." << endl; 

//Mostrar Linea divisora
cout << "---" << endl;
    
    // Avance de pagina
    cout << "Avance\f pagina." << endl; 

//Mostrar Linea divisora
cout << "---" << endl;
    
    // Comillas dobles
    cout << "Comillas \"Dobles.\"" << endl; 
    //Fin de segmento Caracteres de Escape


    //Mostrar linea divisora
cout << "====================" << endl;


    //Mostrar texto de segmento Cadenas de control de tipos de salida
    cout << "Cadenas de control de tipos de salida" << endl;
    // Mostrar linea divisoria
cout << "---------------------" << endl;

    // Cadenas de control de tipos de salida
    //Valor de referencia para los siguientes ejemplos
    int num = 52;

    cout << "El numero es: " << num << endl; // Entero

//Mostrar Linea divisora
cout << "---" << endl;

    cout << "El numero octal es: " << oct << num << endl; // Octal

//Mostrar Linea divisora
cout << "---" << endl;

    cout << "El numero hexadecimal es: " << hex << num << endl; // Hexadecimal

//Mostrar Linea divisora
cout << "---" << endl;

    cout << "El numero en punto flotante es: " << fixed << 3.14 << endl; // Punto flotante

//Mostrar Linea divisora
cout << "---" << endl;

    cout << "El numero en notacion cientifica es: " << scientific << 0.0001 << endl; // Notación científica

//Mostrar Linea divisora
cout << "---" << endl;

    cout << "El caracter es: " << char(65) << endl; // Carácter


    // Mostrar linea divisoria
cout << "====================" << endl;
    //Fin de segmento Cadenas de control de tipos de salida

    // Regresar valor cero
    return 0;
    // Fin de programa
}