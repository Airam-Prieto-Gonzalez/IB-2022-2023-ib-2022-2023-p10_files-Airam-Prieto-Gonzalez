/**
 * Filtra las palabras que empiezan por "A" o "a".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "a" o "A" en A.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int main() {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"A.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 65 || palabra [0] == 97) == true) {
      output_file << palabra << std::endl;
    }
  }
}
