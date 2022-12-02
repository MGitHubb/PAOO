#include <iostream>
#include <string>
using namespace std;

// Clasa de baza
class Animal {
protected:
    string nume;
    int nr_membre;
    string mediu;
public:

    Animal(const string& nume, const string& mediu, const int& nr_membre) :
        nume(nume),
        mediu(mediu),
        nr_membre(nr_membre)
    {
        cout << "sunt in Animal constructor\n";
    }

    void animalSound() {
        cout << "The animal makes a sound \n";
    }

    ~Animal() {             //declar explicit destructorul pentru a preveni generarea automata a celui implicit
        cout << "Acest obiect a fost distrus!\n";
    }

    string get_nume() {
        return nume;
    }

    string get_mediu() {
        return mediu;
    }

    int get_membre() {
        return nr_membre;
    }

    Animal(const Animal&) = delete; // sterg copy constuctorul pentru a interzice copierea unui obiect de tip Animal
    Animal& operator=(const Animal&) = delete;
};

// Clasa derivata
class Bird : public Animal {
    int canfly = 0;  //poate sau nu sa zboare
public:

    Bird(const string tip, const string mediu, const int nr_membre, const int canfly) :
        Animal(tip, mediu, nr_membre),  //apelez constructorul aferent clasei Animal cu parametrii ceruti
        canfly(canfly)                  //initializez canfly
    {
        cout << "sunt in Bird constructor\n";
    }

    void animalSound() {
        cout << "The bird says: cirip cirip \n";
    }

    int get_canfly() {
        return canfly;
    }

    Bird(const Bird& bird); // copy constructor
    Bird operator=(Bird a);
    void show();

};

// Derived class
class Dog : public Animal {
private:
    string stapan;
public:
    Dog(const string tip, const string mediu, const int nr_membre, const string nume_stapan) :
        Animal(tip, mediu, nr_membre),    //apelez constructorul aferent clasei Animal cu parametrii ceruti
        stapan(nume_stapan)               //initializez stapan
    {
        cout << "sunt in Dog constructor\n";
    }

    void animalSound() {
        cout << "The dog says: ham ham \n";
    }

    string get_stapan() {
        return stapan;
    }

    Dog(const Dog& dog); // copy constructor
    Dog operator=(Dog a);
    void show();
};

Dog Dog::operator=(Dog a)
{
    cout << "sunt in Dog assigment op\n";
    if (this == &a) return *this;

    nume = a.nume; // These are integer assignments
    nr_membre = a.nr_membre; // and the = retains its original
    mediu = a.mediu; // meaning relative to them.
    stapan = a.stapan;
    return *this;
}

Bird Bird::operator=(Bird a)
{
    cout << "sunt in Bird assigment op\n";
    if (this == &a) return *this;

    nume = a.nume; // These are integer assignments
    nr_membre = a.nr_membre; // and the = retains its original
    mediu = a.mediu; // meaning relative to them.
    canfly = a.canfly;
    return *this;
}

// Copy constructor.
Dog::Dog(const Dog& a) :
    Animal (a.nume,
        a.mediu,
        a.nr_membre),
    stapan(a.stapan)
{
    cout << "sunt in Dog copy constructor\n";
}

// Copy constructor.
Bird::Bird(const Bird& a) :
    Animal(a.nume,
        a.mediu,
        a.nr_membre),
    canfly(a.canfly)
{
    cout << "sunt in Bird copy constructor\n";
}

void Dog::show()
{
    cout << "tip: " << get_nume() << "\n";
    cout << "mediu: " << get_mediu() << "\n";
    cout << "numar membre: " << get_membre() << "\n";
    cout << "stapan: " << get_stapan() << "\n";
    animalSound();
}

void Bird::show()
{
    int canfly = get_canfly();

    cout << "tip: " << get_nume() << "\n";
    cout << "mediu: " << get_mediu() << "\n";
    cout << "numar membre: " << get_membre() << "\n";
    if (canfly == 0)
        cout << "This bird can't fly \n";
    else
        cout << "This bird can fly \n";

    animalSound();
}

int main() {
    cout << "Creem un caine, un pinguin, un vulture si o randunica\n";
    Dog caine("caine", "terestru", 4, "Luisa");
    Bird pinguin("pinguin", "terestru", 2, 0);
    Bird vulture("vulture", "aerian", 2, 1);
    Bird randunica("randunica", "aerian", 2, 1);
    cout << "\n";
    caine.show();
    cout << "\n";
    pinguin.show();
    cout << "\n";
    vulture.show();
    cout << "\n";
    randunica.show();
    cout << "\n";
    cout << "Executam caine = caine\n";
    cout << "\n";
    caine = caine;
    cout << "\n";
    caine.show();
    cout << "\n";
    cout << "Executam pinguin = vulture = randunica\n";
    cout << "\n";
    pinguin = vulture = randunica;
    cout << "\n";
    cout << "pinguin este acum: \n";
    pinguin.show();
    cout << "\n";
    cout << "vulture este acum: \n";
    vulture.show();
    cout << "\n";
    return 0;
}