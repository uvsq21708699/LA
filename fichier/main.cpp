#include "tuyaux.h"
#include <iostream>
using namespace std;


int main (){

moteur M1 (0);
moteur M2 (0);
moteur M3 (0);

tank T1 (0);
tank T2 (2);
tank T3 (4);

pompe P12 (1);
pompe P23 (1);

valve V12 (1);
valve V13 (1);
valve V23 (1);
valve VT12 (1);
valve VT23 (1);

tuyaux T;
tuyaux Tu2;



cout << T.connexionValveTankMoteur (P12, T2, M1, V12) << endl;

cout << Tu2.connexionValveTankTank (P23, T2, T3, VT23) << endl;


return 0;


}