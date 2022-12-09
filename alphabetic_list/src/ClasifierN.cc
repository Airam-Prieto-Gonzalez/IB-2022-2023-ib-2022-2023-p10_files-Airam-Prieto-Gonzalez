/**
 * Filtra las palabras que empiezan por "N" o "n".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "n" o "N" en N.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierN () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"N.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 78 || palabra[0] == 110) == true) {
      output_file << palabra << std::endl;
    }
  }
}
