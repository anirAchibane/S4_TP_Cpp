CXX = g++               # Compilateur
CXXFLAGS = -Wall -g -std=c++17  # Flags

SRC = exo1.cpp exo2.cpp exo3.cpp exo4.cpp
OBJ = $(SRC:.cpp=.o)      # objets
EXEC = $(SRC:.cpp=.exe)   # Executables

# creer les tous les fichiers .exe
all: $(EXEC)

%.exe: %.o
	$(CXX) $(CXXFLAGS) $< -o $@

# creer les objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean 
clean:
	del /Q *.o *.exe 2>nul