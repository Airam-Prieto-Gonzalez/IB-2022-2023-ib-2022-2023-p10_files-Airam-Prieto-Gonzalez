/**
 * Filtra las palabras que empiezan por "X" o "x".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "x" o "X" en X.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierX () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"X.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 88 || palabra[0] == 120) == true) {
      output_file << palabra << std::endl;
    }
  }
}
