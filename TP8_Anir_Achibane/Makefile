CXX = g++ #Compilateur

CXXFLAGS = -Wall -g -std=c++17  #flags

SRC = Movie.cpp Movies.cpp main.cpp #fichiers cpp à compiler

OBJ = Movie.o Movies.o main.o	#objets


main: *.cpp
#Compiler Movie.cpp Movies.cpp et main.cpp en Movie.o, Movies.o, main.o
	$(CXX) $(CXXFLAGS) -c $(SRC) 
#Puis compiler Movie.o, Movies.o et main.o en main
	$(CXX) $(CXXFLAGS) $(OBJ) -o main
#Enfin effacer les objets .o
	erase $(OBJ)

clean:    #effacer main.exe
	erase main.exe
