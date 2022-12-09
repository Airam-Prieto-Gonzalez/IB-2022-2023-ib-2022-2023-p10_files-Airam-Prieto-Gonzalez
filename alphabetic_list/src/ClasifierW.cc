/**
 * Filtra las palabras que empiezan por "W" o "w".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "w" o "W" en W.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierW () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"W.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 87 || palabra[0] == 119) == true) {
      output_file << palabra << std::endl;
    }
  }
}
