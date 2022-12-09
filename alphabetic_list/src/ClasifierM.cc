/**
 * Filtra las palabras que empiezan por "M" o "m".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "m" o "M" en M.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierM () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"M.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 77 || palabra[0] == 109) == true) {
      output_file << palabra << std::endl;
    }
  }
}
