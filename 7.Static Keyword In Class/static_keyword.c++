// static_data_member
// that variable is going to share memory with all of the class instances

// #include <iostream>
// using namespace std;

// class abc
// {
// public:
//     static int x, y;
//     void print() const
//     {

//         cout << x << " " << y << endl;

//         // this_pointer
//         // cout << this->x << " " << this->y << endl;
//     }
// };

// int abc::x;
// int abc::y;

// int main1()
// {
//     // abc obj1 = {1, 2};
//     // abc obj2 = {4, 5};

//     abc obj1;
//     obj1.x = 1;
//     obj1.y = 2;
//     obj1.print();

//     abc obj2;
//     obj2.x = 10;
//     obj2.y = 20;
//     obj2.print(); // last wala se sb ho jaigye same

//     obj1.print();
//     obj2.print();
//     return 0;
// }

// static member function
// there is no instances of that class being into that method

#include <iostream>
using namespace std;

class abc
{
public:
    int x, y;
    abc() : x(0), y(0)
    {
    }
    static void printse()
    {

        // cout << x << " " << y << endl;// cant do
        // no this pointer accessible
        // this->x;

        printf("I am in Static %s\n", __FUNCTION__);
    }
};

int main()
{

    abc obj1;

    abc::printse();

    abc obj2;

    abc::printse();

    obj1.printse();
    obj2.printse();
    return 0;
}