/**
 * Filtra las palabras que empiezan por "T" o "t".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "t" o "T" en T.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierT () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"T.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 84 || palabra[0] == 116) == true) {
      output_file << palabra << std::endl;
    }
  }
}
