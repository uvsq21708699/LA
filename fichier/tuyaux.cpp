#include "tuyaux.h"


	

tuyaux::tuyaux (){


}

tuyaux::~tuyaux(){
}

int tuyaux::getTuyaux (){
	return TT1->getTaille ();
}



int tuyaux::connexion (pompe &p, tank &t, moteur &m){

	if ((p.getStatus()==1) && (t.getTaille() > 0) ) {
		m.setStatus (1);
		return 1;
	}
	else {
		if (p.getStatus () == 0){
			cout << "La pompe nest pas active"<< endl;
		}
		if (t.getTaille() <= 0){
			cout << "Il n'y a plus de carburant dans le tank" << endl;
		}
	}
	return 0;
}

int tuyaux::connexionValveTankMoteur (pompe &p, tank &t, moteur &m, valve &v){


	if ((p.getStatus()==1) && (t.getTaille() > 0)  && (v.getStatus() == 1)) {
		m.setStatus (2);
		cout << "Connexion avec une valve entre un moteur et un tank" << endl;
		return 1;
	}

}



int tuyaux::connexionValveTankTank (pompe &p, tank &t1, tank &t2, valve &v){
	if ((p.getStatus()==1) && (t1.getTaille() > 0) && (t2.getTaille () > 0) && (v.getStatus() == 1)) {
		cout << "Connexion avec une valve entre deux tank" << endl;
		//transvaser un tank dans un autre ??
		return 1;
	}
	return 0;
}
