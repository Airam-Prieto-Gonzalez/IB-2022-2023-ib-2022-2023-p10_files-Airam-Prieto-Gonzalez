/**
 * Filtra las palabras que empiezan por "E" o "e".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "e" o "E" en E.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierE () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"E.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 69 || palabra[0] == 101) == true) {
      output_file << palabra << std::endl;
    }
  }
}
