CPP=g++
RM=rm -f
CFLAGS=-g -std=c++11

SRC =  main.cpp keyboard-event.cpp #tous les fichiers cpp doivent être rajouté ici
OBJ = $(SRC:.cpp=.o)

donjon : $(OBJ)
	$(CPP) $^ -o $@

# les dépendances
#playboard.o : playboard.cpp playboard.h keyboard-event.h
#keyboard-event.o : keyboard-event.cpp keyboard-event.h
#game.o : game.cpp game.h playboard.h
#main.o : main.cpp game.h

%.o:%.cpp *.h
	$(CPP) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) *.o donjon

.PHONY: clean
