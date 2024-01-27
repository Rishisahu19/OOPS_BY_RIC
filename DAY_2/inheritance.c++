#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;
    void eat()
    {
        cout << "Eating" << endl;
    }

    // void setAge(int age)
    // {
    //     this->age = age;
    // }
    // int getAge()
    // {
    //     return this->age;
    // }
};
// class Dog : public Animal
// class Dog : protected Animal
class Dog : private Animal
{
    // important
    public:

    void print()
    {
        cout << this->age;
    }
};
int main()
{
    // cout << "Hello World" << endl;
    Dog d1;
    // d1.eat();
    d1.print();


    return 0;
}