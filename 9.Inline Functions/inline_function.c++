#include <iostream>
using namespace std;

inline void numberShow(int num)
{
    cout << num << endl;
}
int main()
{
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);
    numberShow(6);

    // after Inline
    // Advantage
    // -> Clean Code
    // -> Remove:function calling overhead
    //-> Memory Less

    // Disadvantage
    // ->Use only small sized function

    //  cout << 6 << endl;
}

// inline vs define
// inline(Replace after complination)
// define (Replace before complination)