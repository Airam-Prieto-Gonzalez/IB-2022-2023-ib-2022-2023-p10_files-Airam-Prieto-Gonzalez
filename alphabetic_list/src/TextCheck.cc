/**
 * Determina si existe un fichero llamado Texto.txt para que el programa principal trabaje con él.
 *
 * @param Ninguno
 * @return Código de error en el caso de que no exista un texto para leer 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int  TextCheck() {
  // Determina si existe un fichero de texto disponible para abrir.
  std::ifstream input_file{"Texto.txt"};
  if (!input_file) {
    std::cerr << "Uh oh, Texto.txt no pudo ser abierto!" << std::endl;
    return 1;
  }
  return 0;
}
