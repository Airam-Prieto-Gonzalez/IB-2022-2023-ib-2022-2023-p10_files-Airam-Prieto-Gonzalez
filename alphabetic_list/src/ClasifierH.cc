/**
 * Filtra las palabras que empiezan por "H" o "h".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "h" o "H" en H.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierH () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"H.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 72 || palabra[0] == 104) == true) {
      output_file << palabra << std::endl;
    }
  }
}
