/**
 * Filtra las palabras que empiezan por "C" o "c".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "c" o "C" en C.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierC () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"C.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 67 || palabra[0] == 99)== true) {
      output_file << palabra << std::endl;
    }
  }
}
