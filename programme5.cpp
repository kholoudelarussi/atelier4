#include <iostream>
#include <iterator>
#include <set>
using namespace std;
int main()
{
//  set container
set<int> s1;
for (int i=1; i < 101 ; ++i)
{

s1.insert(i);//insertion de tous les entiers de 1 a 100




}
// Iterator for the set
    set<int> :: iterator it;

    // Print the elements of the set
    for(it=s1.begin(); it != s1.end();it++){
	
        cout<<*it<<" ";
}
    cout<<endl;
    
    int nbr;//declarer le variable nombre de type int
    cin >> nbr;//enter ce nombre par l'utilisateur
  if (s1.find(nbr) != s1.end()) {//condition if pour voir si le nombre entree par l'utilisateur est presente
        std::cout << " le nomrbre est presente dans le set" << std::endl;
    }
    else {
        std::cout << "il n ya pas ce nombre dans le set" << std::endl;
    }
return 0;
}
