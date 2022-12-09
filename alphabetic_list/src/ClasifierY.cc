/**
 * Filtra las palabras que empiezan por "Y" o "y".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "y" o "Y" en Y.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierY () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"Y.txt"};
  while (input_file >> palabra) {
    if ((palabra[0] == 89 || palabra[0] == 121) == true) {
      output_file << palabra << std::endl;
    }
  }
}
