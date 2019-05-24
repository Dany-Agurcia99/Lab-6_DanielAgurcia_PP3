run: Main.o Carro.o Motor.o Chasis.o Pintura.o
	g++ Main.o Carro.o Motor.o Chasis.o Pintura.o -o run
Main.o: Main.cpp Carro.h Motor.h Chasis.h Pintura.h
	g++ -c Main.cpp
Chasis.o: Chasis.cpp Carro.h
	g++ -c Chasis.cpp
Pintura.o: Pintura.cpp Pintura.h
	g++ -c Pintura.cpp
Motor.o: Motor.cpp Motor.h
	g++ -c Motor.cpp
Carro.o: Carro.h Carro.cpp Motor.h Motor.cpp Chasis.h Chasis.cpp Pintura.h Pintura.cpp 
	g++ -c Carro.cpp