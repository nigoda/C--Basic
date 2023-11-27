#include <iostream>

using namespace std;
void printfun(char *s);
void printfun(int f);
void printfun(int f,int i);

int main()
{
    printfun("hello");
    return 0;
}

void printfun(char *s)
{
    cout <<s<< endl;
    cout <<"string"<< endl;
}

void printfun(int f)
{
    cout <<f<< endl;
    cout <<"int"<< endl;
}

void printfun(int f,int i)
{
    cout <<f<< endl;
    cout <<i<< endl;
    cout <<"int-int"<< endl;
}
