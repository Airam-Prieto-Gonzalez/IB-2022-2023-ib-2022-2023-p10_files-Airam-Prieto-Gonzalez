/**
 * Filtra las palabras que empiezan por "G" o "g".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "g" o "G" en G.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierG () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"G.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 71 || palabra[0] == 103) == true) {
      output_file << palabra << std::endl;
    }
  }
}
