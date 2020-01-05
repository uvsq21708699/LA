Compilation :Compil_tuyaux Compil_moteur Compil_pompe Compil_valve Compil_tank  Compil_main 
	g++ -o programme moteur.o pompe.o valve.o tank.o tuyaux.o main.o 

Compil_tuyaux: tuyaux.cpp tuyaux.h
	g++ -c tuyaux.cpp tuyaux.h

Compil_moteur: moteur.cpp moteur.h
	g++ -c moteur.cpp moteur.h

Compil_pompe: pompe.cpp pompe.h
	g++ -c pompe.cpp pompe.h

Compil_valve: valve.cpp valve.h
	g++ -c valve.cpp valve.h

Compil_tank: tank.cpp tank.h
	g++ -c tank.cpp tank.h



Compil_main: main.cpp 
	g++ -c main.cpp

clean: 
	rm -f *.o
	rm -f *.gch
	rm -f programme
