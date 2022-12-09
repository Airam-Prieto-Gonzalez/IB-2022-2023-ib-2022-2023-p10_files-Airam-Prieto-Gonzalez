/**
 * Determina la palabra con mas vocales de un fichero de texto.
 *
 * @param Ninguno
 * @return La palabra con el mayor numero de vocales
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "VowelAndConsonant.h"
int Vowel() {
  std::ifstream input_file{"Texto.txt"};
  int numero_de_vocales_nuevo{0};
  int numero_de_vocales_viejo{0};
  std::string mayor_vocales{};
  std::string palabra1 {};
  while (input_file >> palabra1) {
    for (int i = 0; i < palabra1.size(); ++i) {
      if (palabra1[i] == 97 || 101 || 105 || 111 || 117 || 65 || 69 || 73 || 79 || 85) {
        ++numero_de_vocales_nuevo;
      }
      if (numero_de_vocales_nuevo - numero_de_vocales_viejo > 0) {
        mayor_vocales = palabra1;
      }
    }
    if (numero_de_vocales_viejo < numero_de_vocales_nuevo) {
      numero_de_vocales_viejo = numero_de_vocales_nuevo;
      numero_de_vocales_nuevo = 0;
    } else {
      numero_de_vocales_nuevo = 0;
    }
  }
  std::cout << "Con mas vocales: " << mayor_vocales << std::endl;
  return 0;
}

