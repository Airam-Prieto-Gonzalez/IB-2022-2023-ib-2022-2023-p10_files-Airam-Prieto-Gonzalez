/**
 * Filtra las palabras que empiezan por "V" o "v".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "v" o "V" en V.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierV () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"V.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 86 || palabra[0] == 118) == true) {
      output_file << palabra << std::endl;
    }
  }
}
