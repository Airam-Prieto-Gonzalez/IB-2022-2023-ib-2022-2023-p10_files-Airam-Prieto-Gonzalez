/**
 * Filtra las palabras que empiezan por "R" o "r".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "r" o "R" en R.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierR () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"R.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 82 || palabra[0] == 114) == true) {
      output_file << palabra << std::endl;
    }
  }
}
