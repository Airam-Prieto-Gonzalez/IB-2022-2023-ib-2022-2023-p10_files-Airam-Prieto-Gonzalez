/**
 * Filtra las palabras que empiezan por "K" o "k".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "k" o "K" en K.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierK () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"K.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 75 || palabra[0] == 107) == true) {
      output_file << palabra << std::endl;
    }
  }
}
