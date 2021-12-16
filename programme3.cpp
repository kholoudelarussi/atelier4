#include <iostream>
#include <list>
#include <iterator>
using namespace std;
//fonction
void showlist(list <int> l)
{
list <int> :: iterator it;//iterator
for(it = l.begin(); it != l.end(); ++it)
cout << '\t' << *it;
cout << '\n';
}
int main()
{
list<int>list1;

for (int i=0; i < 9 ; ++i)//boucle for pour inserer des entiers  
{
	cin >> i;//inserer un nombre par l'utilisateur
list1.push_back(i);//insertion dans la liste

}
cout << "List 1 est : ";//afficher la liste1
showlist(list1);

cout << "list1.sort(): ";//trier la liste
list1.sort();
showlist(list1);//affiche la liste trier

return 0;
}
