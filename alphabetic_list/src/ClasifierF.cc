/**
 * Filtra las palabras que empiezan por "F" o "f".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "f" o "F" en F.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierF () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"F.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 70 || palabra[0] == 102) == true) {
      output_file << palabra << std::endl;
    }
  }
}
