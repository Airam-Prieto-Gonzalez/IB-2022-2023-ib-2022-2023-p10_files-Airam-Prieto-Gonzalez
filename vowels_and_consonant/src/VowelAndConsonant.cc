 /**
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica 2022-2023
    *
    * @file Problema 1 Practica 10 C++
    * @author Airam Prieto González
    * @date Dic 3 2022
    * @brief El programa lee un fichero y determina la palabra con mas vocales y la palabra con mas consonantes 
    * @bug There are no known bugs
    */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "VowelAndConsonant.h"
int main() {
  CompruebaTexto();
  Vowel();
  Consonant();
}

