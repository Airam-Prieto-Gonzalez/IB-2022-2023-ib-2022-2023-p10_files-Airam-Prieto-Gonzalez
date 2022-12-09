/**
 * Filtra las palabras que empiezan por "I" o "i".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "i" o "I" en I.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierI () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"I.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 73 || palabra[0] == 105) == true) {
      output_file << palabra << std::endl;
    }
  }
}
