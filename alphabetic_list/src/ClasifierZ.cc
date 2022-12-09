/**
 * Filtra las palabras que empiezan por "Z" o "z".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "z" o "Z" en Z.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierZ () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"Z.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 90 || palabra[0] == 122) == true) {
      output_file << palabra << std::endl;
    }
  }
}
