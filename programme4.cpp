#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;
//function for printing the elements in a list
void showlist(list <string> l)
{
list <string> :: iterator it;
for(it = l.begin(); it != l.end(); ++it)
cout << '\t' << *it;
cout << '\n';
}
int main()
{
	string personne1,personne2,personne3;//declarer 3 personnes de type string

list<string>list1;

for ( int i=0; i <1 ; ++i){
cin >> personne1;//enter le nom et prenom  de personne 1 par l'utilisateur
 list1.push_back (personne1);//affichage de personne1
 cin >> personne2;
   list1.push_back (personne2);
   cin >> personne3;
   list1.push_back (personne3);
}
 cout << "List 1 est : ";
 showlist(list1);//afficher la liste des 3 personnes 
 cout << "list1.sort(): ";
list1.sort();//trier la liste par l'ordre alphabetique
showlist(list1);
return 0;
}
