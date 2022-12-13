/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Airam Prieto Gonzalez
 * @date Dic 13 2020
 * @brief El programa hace una lectura de una DFA
 *
 */

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ifstream input_file{"prueba.txt"}; // ios_base::in
  int numero_estados;
  int estado_inicial;
  input_file >> numero_estados;
  input_file >> estado_inicial;
 
  std::cout << "|Q|= " << numero_estados << std::endl;
  std::cout << "q0=  " << estado_inicial << std::endl;
  int etiqueta, aceptacion, numero_transiciones;
  char caracter;
  int estado_siguiente;
  std::vector<int> aceptados{};
  for (int i{0}; i < numero_estados; ++i) {
    input_file >> etiqueta;
    input_file >> aceptacion;
    input_file >> numero_transiciones;
    for (int j{0}; j < numero_transiciones; ++j) {
      input_file >> caracter;
      input_file >> estado_siguiente;
      std::cout << "delta(" << etiqueta << ", " << caracter << ") = " << estado_siguiente << std::endl;
    }
    if (aceptacion == 1) {
      aceptados.emplace_back(etiqueta);
    }
  }
  std::cout << "F = { ";
  for (int i{0}; i < aceptados.size(); ++i ) {
    std::cout << aceptados[i] << " ";
  }
  std::cout << "}" << std::endl;
  input_file.close();
  return (0);
}
