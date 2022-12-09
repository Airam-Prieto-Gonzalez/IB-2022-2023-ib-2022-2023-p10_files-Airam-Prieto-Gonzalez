/**
 * Filtra las palabras que empiezan por "L" o "l".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "l" o "L" en L.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierL () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"L.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 76 || palabra[0] == 108) == true) {
      output_file << palabra << std::endl;
    }
  }
}
