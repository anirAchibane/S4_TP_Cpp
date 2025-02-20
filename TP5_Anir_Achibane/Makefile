COMP = g++ #Compilateur

FLAGS = -Wall -g -std=c++17  #flags

SRC = EXO1.cpp EXO2.cpp EXO3.cpp EXO4.cpp EXO5.cpp EXO6.cpp #Exercices à compiler

EXE = $(SRC:.cpp=)

all: $(EXE)

%: %.cpp
	$(COMP) $(FLAGS) -o $@ $<

clean:    #effacer tout les .exe quand on execute clean
	erase /f /q *.exe  
