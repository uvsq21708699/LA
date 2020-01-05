#include "moteur.h"



moteur::moteur(int s){
	status = s;
}

moteur::~moteur(){

}


int moteur::getStatus (){
	return this->status;	
}

void moteur::setStatus (int s){
	status = s;
}