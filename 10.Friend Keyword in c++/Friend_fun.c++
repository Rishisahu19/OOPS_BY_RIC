#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A(int _val) : x(_val) {}

    int getX() const
    {
        return x;
    }
    void setX(int _val)
    {
        x = _val;
    }

    friend class B; ///Friend class 

    friend void print(const A &); //friend function
};
class B
{

public:
    void print(const A &a)
    {
        cout << a.getX() << endl;
        cout << a.x << endl; // cant do bec x is private but by using friend we can access
    }
};

void print(const A &a)
{

    cout << a.x << endl;
}

int main()
{
    A a(5);
    B b;
    b.print(a);
    print(a);
}