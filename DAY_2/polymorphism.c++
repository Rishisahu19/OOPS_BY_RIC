#include <iostream>
using namespace std;

// function overloading
// class Maths
// {
// public:
//     int sum(int a, int b)
//     {
//         cout << "First"
//              << " " ;
//         return a + b;
//     }
//     int sum(int a, int b, int c)
//     {
//         cout << "Second"
//              << " ";
//         return a + b + c;
//     }
//     int sum(int a, float b)
//     {
//         cout << "Third"
//              << " " ;
//         return a + b + 10;
//     }
//     // wrong
//     // double sum(int a, int b, int c)
//     // {
//     //     return 500;
//     // }

// };

// operator overloading
class param
{
public:
    int val;
    void operator+(param &obj2)
    {
        int value1 = this->val;
        int value2 = obj2.val;
        cout << (value1 * value2) << endl;
    }
};

int main()
{
    // Maths obj;
    // cout<<obj.sum(2,5);
    //  cout<<obj.sum(2,5,7);
    //   cout<<obj.sum(2,5.2f);

    // ..............................
    param obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    // This should print the Multiply

    // (current obj)+(function call or member function)(input parameter)
    obj1 + obj2;
}