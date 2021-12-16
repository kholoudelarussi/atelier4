 #include <iostream>
 #include <cmath>

using namespace std;
template<class t>//declaration du template de type t

class complexe {//declaration du classe

public:
	
    t re;// declaration  du class avec deux attributs
    t img;
public:
    complexe(t r = 0, t i = 0) //constructeur
    {
        re = r;
        img = i;
    }
    void afficher()
    {
        cout << re;

        //Pour ne pas afficher 5 + -2i (si img est negatif)
        if (img >= 0)
            cout << " + ";

        cout << img << "i" << endl;
    }
    //Opérateur : complexe = complexe
    t egal(const complexe & r) {
        return (re == r.re && img == r.img);
    }
    //Opérateur : complexe + complexe
    complexe operator+(complexe r)
    {
        complexe s;
        s.re = re + r.re;
        s.img = img + r.img;
        return s;
    }



    //Opérateur : complexe - complexe
    complexe operator-(complexe r)
    {
        complexe s;
        s.re = re - r.re;
        s.img = img - r.img;
        return s;
    }

    //Opérateur : complexe * complexe
    complexe operator*(complexe r)
    {
        complexe p;
        p.re = re * r.re - img * r.img;
        p.img = re * r.img + img * r.re;
        return p;
    }

    //Opérateur : complexe / complexe
    complexe operator/(complexe r)
    {
        complexe s;
        s.re = re / r.re;
        s.img = img / r.img;
        return s;
    }
};


int main(){
    //on utilise les template pour choisir quel variable ona besoin dans ce cas on choisie int
    complexe<int> c1;

    complexe<int> a(5.6,2.2),b(2.6,8.3),c;
    cout << "  a = ";
    a.afficher();
    cout << "la partie reel de  a = "<< a.re<<endl;
    cout << "la partie imaginaire de  a = "<< a.img<<endl;

    cout << "b = ";
    b.afficher();
    cout << "la partie reel de  b = "<< b.re<<endl;
    cout << "la partie imaginaire de  b = "<< b.img<<endl;
    if(a.egal(b))
        cout << "les nombres complexes a et b sont egaux " << endl;
    else
        cout << "les nombres complexes a et b ne sont pas egaux" << endl;
    cout << "a + b = ";
    c = (a + b);
    c.afficher();

    cout << "a - b = ";
    c = (a - b);
    c.afficher();

    cout << "a * b = ";
    c = (a * b);
    c.afficher();

    cout << "a / b = ";
    c = (a / b);
    c.afficher();
    return 0;
}

