COMP = g++ #Compilateur

FLAGS = -Wall -g -std=c++17  #flags

SRC = exo1.cpp exo2.cpp exo3.cpp exo4.cpp exo5.cpp exo6.cpp exo7.cpp #Exercices à compiler

EXE = $(SRC:.cpp=)

all: $(EXE)

%: %.cpp
	$(COMP) $(FLAGS) -o $@ $<

clean:    #effacer tout les .exe quand on execute clean
	erase /f /q *.exe  
