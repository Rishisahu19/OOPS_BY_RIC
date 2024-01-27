#include <iostream>
#include "Absta_ex.h"

using namespace std;

void birddoesSomething(Bird *&bird)
{
    bird->eat();
    bird->fly();
    bird->eat();
}
int main()
{
    Bird *bird = new sanya();
    birddoesSomething(bird);

    // sparrow *sp = new sparrow();
    // sp->eat();


    // Bird *bird2 = new sanya();
    // birddoesSomething(bird2);

    // xxxxxxxxxxxxxxxxxxxxx
    // object of class bird cnt be done
    //    Bird *bird3 = new Bird();
    // birddoesSomething(bird3);
}