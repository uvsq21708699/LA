#include "valve.h"

valve::valve(int s){
	status = s;
}

valve::~valve (){
}


int valve::getStatus (){
	return this->status;
}

void valve::setStatus (int s){
	this->status = s;
}