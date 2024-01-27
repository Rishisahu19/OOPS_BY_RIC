#include <iostream>
using namespace std;
// Readable increase
#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)
float circleArea(float r)
{
    return PI * r * r;
}
float circlePerm(float r)
{
    return 2 * PI * r;
}
void fun1()
{
    int x = 6;
    int y = 17;
    // int c= (x > y ? x : y);
    int c = MAXX(x, y);
}
void fun2()
{
    int x = 6;
    int y = 17;
    int c = MAXX(x, y);
}
void fun3()
{
    int x = 6;
    int y = 17;
    int c = MAXX(x, y);
}
int main()
{
    cout << circleArea(69.69) << endl;
}