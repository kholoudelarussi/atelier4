#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
   if( diviseur == 0 ) {//parceque c'est ca l'exeption on peut pas devise par 0
throw "Attempted to divide by zero!";
}
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y;
try{//la gestion des exceptions est effectuée à l'aide de l'instruction try/catch.

cout << "Entrez l indice de l entier a diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
cout << "Le resultat de la division est: "<< endl;
cout <<Test::division(x,y) << endl;
}catch (const char* e) {
cerr << e << endl;
}
return 0;
}

