/**
 * Filtra las palabras que empiezan por "J" o "j".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "j" o "J" en J.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierJ () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"J.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 74 || palabra[0] == 106) == true) {
      output_file << palabra << std::endl;
    }
  }
}
