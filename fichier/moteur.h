#include "pompe.h"
class moteur {
	
private:
	int status;
	pompe * p = new pompe (0);
	
	
	
public:
	moteur(int s);
	~moteur();
	int getStatus ();
	void setStatus (int s);


};
