/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file rotate
  * @author López Cabrera Haridian alu0101581293@ull.edu.es
  * @date Dec 09 2022
  * @brief Este programa rota las vocales en minúscula que encuentre en el             fichero que se le pase como parámetro por línea de comandos                 (a por e, e por i, ...).
  * @bug No hay bugs conocidos
  */

#include <iostream>
#include <fstream>
#include <string>

void PropositoPrograma() {
  std::cout << "Este programa rota las vocales en minúscula que encuentre en el fichero que se le pase como parámetro por línea de comandos (a por e, e por i, ...)." << std::endl;
}

char RotacionDeAyE(char letra) {
  char vocal_rotada = letra + 4;
  return vocal_rotada;
}

char RotacionDeIyO(char letra) {
  char vocal_rotada = letra + 6;
  return vocal_rotada;
}

char RotacionDeU(char letra) {
  char vocal_rotada = letra -20;
}

int main() {
  PropositoPrograma();
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"VocalesInvertidas.txt"};
  while (input_file >> palabra) {
    char letra{};
    for (int i = 0; i < palabra.length(); ++i) {
      letra = palabra[i];
      if (letra == 97 | letra == 101) {
        output_file << RotacionDeAyE(letra);
      }
      if (letra == 105 | letra == 111) {
        output_file << RotacionDeIyO(letra);
      }
      if (letra == 117) {
        output_file << RotacionDeU(letra);
      }
      if (letra != 97 && letra != 101 && letra != 105 && letra != 111 && letra != 117) {
        output_file << letra; 
      }
    }
  output_file << " ";      
  }
}
