time_keeper: driver.o time.o
	g++ -o time_keeper driver.o time.o
	
driver.o: driver.cpp time.h
	g++ -c driver.cpp
	
time.o: time.cpp time.h
	g++ -c time.cpp

clean:
	rm *.o
