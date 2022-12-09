/**
 * Filtra las palabras que empiezan por "S" o "s".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "s" o "S" en S.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierS () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"S.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 83 || palabra[0] == 115) == true) {
      output_file << palabra << std::endl;
    }
  }
}
