#include "tank.h"
#include "moteur.h"
#include "valve.h"


#include <iostream>
using namespace std;


class tuyaux {
	
	
private:

	tank * TT1 = new tank (0);


public:
	tuyaux ();
	

	~tuyaux();
	int getTuyaux ();
	int connexion (pompe &p, tank &t, moteur &m);
	int connexionValveTankMoteur (pompe &p, tank &t, moteur &m, valve &v);
	int connexionValveTankTank (pompe &p, tank &t1, tank &t2, valve &v);


};
