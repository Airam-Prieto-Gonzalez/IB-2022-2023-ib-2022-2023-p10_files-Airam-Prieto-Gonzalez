/**
 * Determina la palabra con mas consonantes de un fichero de texto.
 *
 * @param Ninguno 
 * @return La palabra con el mayor numero de consonantes
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int Consonant() {
  std::ifstream input_file{"Texto.txt"};
  std::string mayor_consonantes{};
  std::string palabra2{};
  int consonantes_viejo{0};
  int consonantes_nuevo{0}; 
  while (input_file >> palabra2) {
    for (int j = 0; j < palabra2.size(); ++j) {
      if (palabra2[j] == 66 || 67 || 68 || 70 || 71 || 72 || 74 || 75 || 76 || 77 || 78 || 80 || 81 || 82 || 83 || 84 || 98 || 99 || 100 || 102 || 103 || 104 || 106 || 107 || 108 || 109 || 110 || 112 || 113 || 114 || 115 || 116) {	// No se como hacerlo con un vector y un for.
        ++consonantes_nuevo;								    // porque cuando lo intento solo muestra la 
      }											    // primera palabra del fichero.
      if (consonantes_nuevo - consonantes_viejo > 0) {
        mayor_consonantes = palabra2;
      }
    }
    if (consonantes_viejo < consonantes_nuevo) {
      consonantes_viejo = consonantes_nuevo;
      consonantes_nuevo = 0;
    } else {
      consonantes_nuevo = 0;
    }
  }
  std::cout << "Con mas consonantes " << mayor_consonantes << std::endl;
  return 0;
}

