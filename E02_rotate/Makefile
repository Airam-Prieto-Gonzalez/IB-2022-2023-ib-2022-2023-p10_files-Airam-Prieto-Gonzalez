
#**
# * Universidad de La Laguna 
# * Escuela Superior de Ingenería y Tecnología
# * Grado en Ingeniería Informática
# * Informática Básica 2022-2023
# * 
# * @author López Cabrera Haridian alu0101581293@ull.edu.es
# * @date Nov 08 2022
# * @brief Makefile
# * @bugs No hay bugs conocidos
 
CXX = g++
CXXFLAGS = -std=c++17 -Wall
 
all: rotate
 
rotate: rotate.o
	$(CXX) $(CXXFLAGS) -o rotate rotate.o 

.PHONY: all clean
 
clean :
	rm -f rotate *.o

