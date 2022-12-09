/**
 * Filtra las palabras que empiezan por "U" o "u".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "u" o "U" en U.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierU () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"U.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 85 || palabra[0] == 117) == true) {
      output_file << palabra << std::endl;
    }
  }
}
