#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
using namespace std;
class Bird
{
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // classes that inherits this class
    // has to implement pure virtual function
};
class sparrow : public Bird
{
private:
    void eat()
    {
        cout << "Sparrow is Eating\n";
    }
    void fly()
    {
        cout << "Sparrow is flying\n";
    }
};
class eagle : public Bird
{
public:
    void eat()
    {
        cout << "eagle is Eating\n";
    }
    void fly()
    {
        cout << "eagle is flying\n";
    }
};
class sanya : public Bird
{
public:
    void eat()
    {
        cout << "sanya is cutie\n";
    }
    void fly()
    {
        cout << "sanya is Good \n";
    }
};

#endif