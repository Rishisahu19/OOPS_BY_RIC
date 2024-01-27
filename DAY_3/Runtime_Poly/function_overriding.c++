#include <iostream>
using namespace std;

class Animal
{

public:
     virtual void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    // Animal a;
    // a.speak();
    // Dog d;
    // d.speak();

    // Animal *a = new Animal();
    // a->speak();

    // Dog *d = new Dog();
    // d->speak();

    // UpCasting(parent class ka function call hota hai)
    // Animal *a = new Dog();
    // a->speak();

    // DownCasting
    // Dog *d = (Dog*)new Animal();
    // d->speak();


    // virtual :object ka function call hoga 

}