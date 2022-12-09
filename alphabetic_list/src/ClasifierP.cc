/**
 * Filtra las palabras que empiezan por "P" o "p".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "p" o "P" en P.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierP () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"P.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 80 || palabra[0] == 112) == true) {
      output_file << palabra << std::endl;
    }
  }
}
