#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int &ref = x;

    cout <<&x<<":"<<&ref<< endl;
    cout <<x<<":"<<ref<< endl;
    return 0;
}
