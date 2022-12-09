/**
 * Filtra las palabras que empiezan por "Q" o "q".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "q" o "Q" en Q.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierQ () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"Q.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 81 || palabra[0] == 113) == true) {
      output_file << palabra << std::endl;
    }
  }
}
