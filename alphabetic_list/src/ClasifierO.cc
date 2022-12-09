/**
 * Filtra las palabras que empiezan por "O" o "o".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "o" o "O" en O.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierO () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"O.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 79 || palabra[0] == 111) == true) {
      output_file << palabra << std::endl;
    }
  }
}
