#include <iostream>

using namespace std;


class student{
string student_name;
int age;
int num;

public:
void display_ST(){
cout<<student_name<<" "<<age<<" "<<num<<endl;
}

student(){
student_name = "nisdvn";
age = 5;
num= 425;
}

};


class faculty{
string faculty_name;
string age;
int num;

public:
faculty(){
faculty_name = "dfsd";
age = 12;
num= 245;
}

void display_FT(){
cout<<faculty_name<<" "<<age<<" "<<num<<endl;
}


};

class instute:public student,public faculty{

};



int main()
{
    instute in;
    in.display_FT();
    in.display_ST();
    cout << "Hello world!" << endl;
    return 0;
}
