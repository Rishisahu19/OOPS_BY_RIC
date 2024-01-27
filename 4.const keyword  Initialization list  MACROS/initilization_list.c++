#include <iostream>
using namespace std;

class abc
{

    int x;
    int *y;
    int z;

public:
    //   ctor :old style
    // abc(int _x, int _y, int _z = 0)
    // {
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }

    // initialization list

    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z)
    {
        cout << "INIT_LIST" << endl;
        // z=10;(can't do)
    }
    int getX() const
    {

        return x;
    }
    void setX(int _val)
    {
        x = _val;
    }
    int getY() const
    {

        return *y;
    }
    void setY(int _val)
    {
        *y = _val;
    }
    int getZ() const
    {

        return z;
    }
};

void printABC(const abc &a)
{
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}

int main()
{
    // abc a;
    // cout << a.getX() << endl;
    // cout << a.getY() << endl;

    abc a(1, 2, 3);
    printABC(a);
}
