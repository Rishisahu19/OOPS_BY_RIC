#include <iostream>
using namespace std;

class abc
{

    int x; //( mutable )->debug purpose
    int *y;
    int z;

public:
    abc()
    {
        x = 0;
        y = new int(0);
        z = 0;
    }
    abc(int _x, int _y, int _z = 0)
    {
        x = _x;
        y = new int(_y);
        z = _z;
    }
    int getX() const
    {
        // x=50; //(can't modify)after cosnt
        return x;
    }
    void setX(int _val)
    {
        x = _val;
    }
    int getY()
    {
        // int f = 20;   // x=50; (can't modify) after const
        // y = &f;
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
    cout << a.getX() << " " << a.getX() << " " << a.getZ() << endl;
}

int main()
{
    // abc a;
    // cout << a.getX() << endl;
    // cout << a.getY() << endl;

    abc a(1, 2, 3);
    printABC(a);
}
int main2()
{
    // const keyword->simplify
    // 1........................................................
    // lvalue->variable having memory location(int x,char y)
    // rvalue->variable doesnot have memory location (5;,int&a)

    // const int x = 5; // x is constant
    // initialization can be done
    // but we cant re-assign a value

    // x=10;

    // int *p=&x;
    // *p=10;
    // cout << x << endl;

    // 2 const with pointer......................................................

    // int *a = new int;
    // *a = 2;
    // cout << *a << endl;
    // // delete a;(memory leak)
    // int b = 5;
    // a = &b;
    // cout << *a << endl;

    // 3 const data,non-const pointer..............................................
    // const int *a = new int(2); // const data,non-const pointer
    // int const *a=new int(2); // same as line no.32
    // (if i write const before * then content will be const)
    // // *a = 20;(can't do  change the contetn of pointer
    // cout << *a << endl;
    // int b = 20;
    // a = &b; // pointer itself can be resssigned
    // cout << *a << endl;

    // 4 const pointer ,but non-const data.....................................
    // int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20; // chal jaigya
    // cout << *a << endl;

    // int b = 50;
    // a = &b; // nhi chalega,const pointer

    // 5 const pointer ,const data.....................................
    // const int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20; // nhi chalega,const data
    // cout << *a << endl;

    // int b = 50;
    // a = &b; // nhi chalega,const pointer

    return 0;
}