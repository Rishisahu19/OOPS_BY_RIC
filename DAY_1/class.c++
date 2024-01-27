#include <iostream>
using namespace std;

class Animal
{
    // int age;
    // int weight;
    // char ch;
private:
    int weight;
    // (Acess Modifier)
public:
    // State or Properties(Data Member)
    int age;
    string name;

    // default constructor
    Animal()
    {
        // intilize
        this->weight = 0;
        this->age = 0;
        this->name = "";

        cout << "Constructor Called" << endl;
    }
    // paramterised constructor
    Animal(int age)
    {
        // intilize
        this->weight = 0;
        this->age = age;
        this->name = "";

        cout << "ParamterisedConstructor Called" << endl;
    }

    Animal(int age, int weight)
    {
        // intilize
        this->weight = weight;
        this->age = age;
        this->name = "";

        cout << "ParamterisedConstructor2 Called" << endl;
    }
    // copy constructor
    //   Animal(Animal obj) --> infinite loop
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        cout << "Copy Constructor Called" << endl;
    }

    // behaviour(Member Function)
    void eat()
    {
        cout << "Eating" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }

    int getWeight()
    {
        return weight;
    }
    // void setWeight(int w)
    // {
    //     weight = w;
    // }
    void setWeight(int weight)
    {
        this->weight = weight;
        // thispointer :point to the current object
    }

    void print()
    {
        cout << this->age << " " << this->weight << " " << this->name;
        cout << endl;
    }

    ~Animal()
    {
        cout<<"I AM INSIDE DESTRUCTOR"<<endl;
    }
};

int main()
{
    // cout << "Hello World" << endl;
    // cout << "Size of Empty Class is: " << sizeof(Animal) << endl;

    // Object Creation

    // static
    // Animal ramesh;
    // ramesh.age = 12;
    // ramesh.name = "Lion";
    // cout << "Age of ramesh is:" << ramesh.age << endl;
    // cout << "Name of ramesh is:" << ramesh.name << endl;
    // cout << "Weight of ramesh is:" << ramesh.weight << endl;
    // getter and setter (private Member)
    // ramesh.setWeight(101);
    // cout<<"Weight :"<<ramesh.getWeight()<<endl;

    // ramesh.eat();
    // ramesh.sleep();

    // Dynamic
    // Animal*suresh =new Animal;
    // suresh.age=15;
    // suresh.name="billi";

    // (*suresh).age=15;
    // (*suresh).name="billi";

    // suresh->age=15;
    // suresh->name="billi";

    // suresh->eat();
    // suresh->sleep();
    // suresh->setWeight(102);
    // cout<<"Weight :"<<suresh->getWeight()<<endl;
    // ...................................................

    // Animal a;
    // Animal *b=new Animal;

    //  Animal a(10);
    // Animal *b=new Animal(20);

    // Animal a(10, 69);
    // Animal *b = new Animal(20, 69);

    // object copy
    // Animal c=a;

    // Animal d(b); nhi chal rha
    // Animal ric(c);


// Problem (Deep and shallow copy)
    // Animal a;
    // a.age = 20;
    // a.setWeight(69);
    // a.name = "love";

    // Animal b = a;

    // a.print();
    // b.print();

    // a.name[0] = 'R';
    // a.print();
    // b.print();

Animal a;
a.age=5;

Animal *b=new Animal();
b->age=12;

// manuually
delete b;


    return 0;
}