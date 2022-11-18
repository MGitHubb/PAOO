#include <iostream>
#include <string>
using namespace std;

// Clasa de baza
class Animal {
    private:
        string nume;
        int nr_membre;
        string mediu;
  public:

    Animal(const string &nume, const string &mediu, const int &nr_membre):
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
        cout<<"Acest obiect a fost distrus!\n";
    }

    string get_nume(){
        return nume;
    }

    string get_mediu(){
        return mediu;
    }

    int get_membre() {
        return nr_membre;
    }

    Animal(const Animal&) =delete; // sterg copy constuctorul pentru a interzice copierea unui obiect de tip Animal
    Animal& operator=(const Animal&) =delete;
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

    int get_canfly(){
        return canfly;
    }

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

    string get_stapan(){
        return stapan;
    }

    void show();
};

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
    if(canfly == 0)
        cout << "This bird can't fly \n";
    else
        cout << "This bird can fly \n";

    animalSound();
}

int main() {
    Dog dog("caine", "terestru", 4, "Luisa");
    dog.show();
    cout << "\n";
    Bird pinguin("pinguin", "terestru", 2, 0);
    pinguin.show();
    cout << "\n";
    Bird vulture ("vulture", "aerian", 2, 1);
    vulture.show();
    cout << "\n";
    //pinguin = vulture; - nu functioneaza deoarece am sters copy constructorul
    return 0;
}
