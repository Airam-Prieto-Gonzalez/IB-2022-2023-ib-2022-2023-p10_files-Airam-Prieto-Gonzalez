/**
 * Filtra las palabras que empiezan por "B" o "b".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "b" o "B" en B.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierB () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"B.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 66 || palabra[0] == 98) == true) {
      output_file << palabra << std::endl;
    }
  }
}
