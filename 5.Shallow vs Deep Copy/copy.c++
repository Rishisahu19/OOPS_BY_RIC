#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int *y;
    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // default dumb copy constructor :it does SHALLOW COPY
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = obj.y;
    // }

    // SMART DEEP COPY
    abc(const abc &obj)
    {
        x = obj.x;
        y = new int(*obj.y);
    }

    void print() const
    {
        printf("X:%d\nPTR Y:%p \nContent of Y (*y):%d\n\n", x, y, *y);
    }
    ~abc()
    {
        delete y; //302 wala bhi delete 
    }
};
int main()
{
    // abc a(1, 2);
    // a.print();

    // // abc b(a);
    // abc b = a; // COPY CONSTRUCTOR
    // b.print();

    // // b.x=20; (Problem)
    // *b.y = 20;

    // cout << "Printing b" << endl;
    // b.print();

    // cout << "Printing a" << endl;
    // a.print();


    // 2.........................................
    abc *a=new abc(1,2);
    abc b=*a;
    delete a;
    b.print();


}