#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void afficherDateEtHeure(const string& s)
{
    if ( s.length() != 12 )//si la longueur est different de 12 on affiche un message
        cerr << "Chaine invalide." << endl;
    else//sinon on divise s pour que la date et l'heure s'affiche comme on veut
    {
        cout << "Date  : " << s.substr(0,2) << "er" << s.substr(2,2) << "/" << s.substr(4,4) << endl;
        cout << "Heure : " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
    }
}

int main(int argc, char** argv)
{
    string s("010920091123");//on prend cette exemple
    afficherDateEtHeure(s); 
}
