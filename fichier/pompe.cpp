#include "pompe.h"

pompe::pompe (int s){
	status = s;
}

pompe::~pompe (){

}



int pompe::getStatus (){
	return this->status;
}

void pompe::setStatus (int s){
	this->status = s;
}