#include <iostream>

using namespace std;

class A
{


    public:
    void same_1(){cout<<"same method 1"<<endl;}
};

class B: public A
{

    public:
    void same_2(){cout<<"same method 1"<<endl;}

};

int main()
{
    A b, *bptr;
    B a;
    bptr=&a;
    bptr->same_2();
    bptr->show_1();
    return 0;
}
