#include <iostream>
using namespace std;

class Complex{
private :
    int real_part,imag_part;

public:
Complex(int r = 0, int i =0) {real_part = r; imag_part = i;}

Complex operator + (Complex const &obj){
Complex result;
    result.real_part=real_part+obj.real_part;
    result.imag_part=imag_part+obj.imag_part;
    return result;
}

    void print()
    {
        cout<<real_part<<"+i"<<imag_part<<endl;
        }
};


int main()
{
    Complex cobj1(10,5),cobj2(2,4);
    Complex cobj3 = cobj1 + cobj2; //call to "Operate"
    cobj3.print();
}
