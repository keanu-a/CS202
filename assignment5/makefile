pets: driver.o pet.o cat.o bird.o fish.o
	g++ -o pets driver.o pet.o cat.o bird.o fish.o

driver.o: driver.cpp cat.h bird.h fish.h
	g++ -c driver.cpp

pet.o: pet.cpp pet.h
	g++ -c pet.cpp

cat.o: cat.cpp cat.h pet.h
	g++ -c cat.cpp

bird.o: bird.cpp bird.h pet.h
	g++ -c bird.cpp

fish.o: fish.cpp fish.h pet.h
	g++ -c fish.cpp

clear:
	rm *.o