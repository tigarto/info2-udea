/**
 *  @file    main.cpp
 *  @author  Informatica 2
 *  @date    10/03/2017
 *  @version 1.0
 *
 *  @brief CSC 112, Lab 1, sorts strings using insertion sort
 *
 *  @section DESCRIPTION
 *
 *  Este es un pequeño programa que muestra como obtener la longitud de una
 *  cadena de caracteres. Se basa en los siguientes enlaces de buenas practicas de documentacion
 *  - Link 1: http://csweb.cs.wfu.edu/~fulp/CSC112/codeStyle.html
 *  - Link 2: http://csweb.cs.wfu.edu/~fulp/CSC112/csc112-new.html
 *  - Link 3: http://www-numi.fnal.gov/offline_software/srt_public_context/WebDocs/doxygen-howto.html
 *  - Link 4: http://www.inference.phy.cam.ac.uk/teaching/comput/C++/examples/ArrayDemo1.shtml
 */

#include <iostream>

using namespace std;

/*************************************************************************
 * Declaracion de las funciones
 *************************************************************************/

int getLenght(char s[]);
void test_getLenght();

int main()
{
    cout << "Ejemplo con cadenas" << endl;
    test_getLenght();
    return 0;
}

/*************************************************************************
 * Definicion de las funciones
 *************************************************************************/

// Funciones de usuario

/**
 *   @brief  Obtiene la longitud de una cadena de caracteres.
 *
 *   @param  s es una cadena de caracteres
 *   @return el tamaño de la cadena de caracteres
 */

// Funciones de test

int getLenght(char s[]) {
    int i = 0;
    int tam = 0;
    while(s[i++] != '\0') {
        tam++;
    }
    return tam;
}

/**
 *   @brief  Funcion de test para getLenght.
 *
 *   @param  void
 *   @return void
 */

void test_getLenght() {
    int t;
    char cad[] = "Saludos terricola";
    cout << "Ensayo -> "<< getLenght("Ensayo") << endl;
    t = getLenght(cad);
    cout << cad <<" -> "<< t << endl;
}
