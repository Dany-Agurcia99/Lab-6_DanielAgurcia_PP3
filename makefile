Main.out: Main.o Carro.o Motor.o Chasis.o Pintura.o
	g++ Main.o Carro.o Motor.o -o Main.out
Main.o: Main.cpp Carro.h Motor.h Chasis.h Pintura.h
	g++ -c Main.cpp
Carro.o: Carro.cpp Carro.h Motor.h Chasis.h Pintura.h
	g++ -c Carro.cpp
Chasis.o: Chasis.cpp Carro.h Motor.h Chasis.h Pintura.h
        g++ -c Chasis.cpp
Pintura.o: Pintura.cpp Carro.h Motor.h Chasis.h Pintura.h
        g++ -c Pintura.cpp
Motor.o: Motor.cpp Carro.h Motor.h Chasis.h Pintura.h
        g++ -c Motor.cpp

