#include <iostream>

using namespace std;

int main()
{
    void* ptr;
    //explicit conversion too int* from void*
    int* numPtr = (int*)ptr;
    int x = 10;
    //int pointer pointing towards variable x
    numPtr = &x;
    cout <<*numPtr<< endl;
    cout <<numPtr<< endl;
    cout <<&numPtr<< endl;
    return 0;
}
