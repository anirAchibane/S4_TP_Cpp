CXX = g++ #Compilateur

CXXFLAGS = -Wall -g -std=c++17  #flags

SRC = main.cpp Account.cpp Savings_Account.cpp Checking_Account.cpp Trust_Account.cpp Account_Util.cpp #fichiers cpp à compiler

OBJ = $(SRC:.cpp=.o)	#objets
EXEC = main.exe

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q *.o *.exe 2>nul