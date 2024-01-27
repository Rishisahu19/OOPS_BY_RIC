#include <iostream>
using namespace std;
// 1. single
//  class Car
//  {
//  public:
//      int age;
//      int weight;
//      void speedUp()
//      {
//          cout << "Speeding Up" << endl;
//      }
//      void breakMarro()
//      {
//          cout << "break maardi" << endl;
//      }
//  };

// class i20 : public Car
// {
// };

// 2.multilevel

// class fruit
// {
// public:
//     string name;
// };
// class Mango : public fruit
// {
// public:
//     int weight;
// };
// class Alphanso : public Mango
// {
// public:
//     int sugarLevel;
// };

// 3.multiple (not working)

// class A
// {
// public:
//     int phy;
// };
// class B : public A
// {
// public:
//     int chem;
// };
// class C : public A, public B
// {
// public:
//     int math;
// };

// (Diamond Problem)(Not working)-->(scope resolution)
// class A
// {
// public:
//     int chem;
//     A()
//     {
//         chem = 101;
//     }
// };
// class B : public A
// {
// public:
//     int chem;
//     B()
//     {
//         chem = 102;
//     }
// };
// class C : public A, public B
// {
// public:
//     int math;
// };

// 4.hierarchical
// class Car
// {
// public:
//     int age;
//     int weight;
//     string name;
//     void speedUp()
//     {
//         cout << "Speeding Up" << endl;
//     }
//     void breakMarro()
//     {
//         cout << "break maardi" << endl;
//     }
// };
// class i20 : public Car
// {

// };
// class verna : public Car
// {

// };

int main()
{
    // i20 ric;
    // ric.speedUp();

    // Alphanso a;
    // cout << a.name << " " << a.weight << " " << a.sugarLevel << endl;

    // C obj;
    // cout<<obj.phy<<" "<<obj.chem<<" "<<obj.math<<" ";

    // C obj;
    // cout<<obj.A::chem<<" "<<obj.math<<" ";
    // cout<<obj.B::chem<<" "<<obj.math<<" ";

    // i20 s11;
    // s11.speedUp();

    // verna f11;
    // f11.speedUp();

    // return 0;
}