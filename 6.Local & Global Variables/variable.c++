#include <iostream>
using namespace std;

int x = 2; // GLOBAL VARIBAL
void fun()
{
    int x = 60;
    cout << x << endl;
    cout << ::x << endl;
    ::x = 69;
    cout << ::x << endl;
}
int main()
{
    x = 4;      // global x;
    int x = 20; // local to main() fn
    cout << x << endl;
    cout << ::x << endl; // Accessing Global with  ::

    {
        int x = 50;
        {
            int x = 44;
            cout << x << endl;
        }
        cout << x << endl;
        cout << ::x << endl;
    }
    // fun();
}