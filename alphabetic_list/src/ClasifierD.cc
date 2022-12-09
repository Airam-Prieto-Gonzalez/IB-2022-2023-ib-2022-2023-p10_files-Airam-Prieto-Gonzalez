/**
 * Filtra las palabras que empiezan por "D" o "d".
 *
 * @param Ninguno.
 * @return Escribe las palabras que empiecen por la "d" o "D" en D.txt.
 */

#include <iostream>
#include <fstream>
#include <string>

int ClasifierD () {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"D.txt"};
  while (input_file >> palabra) {
    if ( (palabra[0] == 68 || palabra[0] == 100)== true) {
      output_file << palabra << std::endl;
    }
  }
}
