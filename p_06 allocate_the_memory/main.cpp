#include <iostream>

using namespace std;

int main()
{
    int *r = new int;
    int *s = new int(10); //new int(value)
    int *t = new int[10]; //new int[size] 10 = 4x10bit
    cout <<r<<","<<s<<","<<t<< endl;

    *r = 10;
    *t = 10;
    cout <<*r<<","<<*s<<","<<*t<< endl;


    delete r;
    delete s;
    delete[] t;

    cout <<*r<<","<<*s<<","<<*t<< endl;

    return 0;
}
