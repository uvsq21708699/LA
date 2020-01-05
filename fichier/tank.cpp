#include "tank.h"

tank::tank(int taille){
	reserve = taille;
}

tank::~tank (){
}


int tank::getTaille (){
	return this->reserve;
}

void tank::setTaille (int taille){
	this->reserve = taille;
}