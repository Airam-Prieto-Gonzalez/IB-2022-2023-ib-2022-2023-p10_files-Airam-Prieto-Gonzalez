#include <iostream>
#include <strings>
#include <fstream>

char RotacionDeAyE(char letra) {
  char vocal_rotada = letra + 4;
  return voca_rotada;
}

char RotacionDeIyO(char letra) {
  char vocal_rotada = letra + 6;
  return vocal_rotada;
}

char RotacionDeU(char letra) {
  char vocal_rotada = letra -20;
}

int main() {
  std::ifstream input_file{"Texto.txt"};
  std::string palabra{};
  std::ofstream output_file{"VocalesInvertidas.txt"};
  while (input_file >> palabra) {
    char letra{};
    for (int i = 0; i < palabra.length; ++i) {
      letra = palabra[i];
      if (letra == 97 | caracter == 101) {
        output_file << RotacionDeAyE(letra);
      }
      if (letra == 105 | letra == 111) {
        output_file << RotacionDeIyO(letra);
      }
      if (caracter == 117) {
        output_file << RotacionDeU(letra);
      }
      if (letra != 97 && letra != 101 && letra != 105 && letra != 111 && letra != 117) {
        output_file << letra; 
      }
    output_file << " ";
    }      
  }
}
