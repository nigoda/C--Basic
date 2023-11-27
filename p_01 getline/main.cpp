#include <iostream>
using namespace std;

int main() {
    string name;
    string num; //getline only inputs the string
    // Write C++ code here
    cout << "Enter you Name"<<endl;
    getline(cin,name); //combination of cin and getline is not possible
    cout<<name<<endl;
    cout << "Enter you Number"<<endl;
    getline(cin,num);
    cout<<num<<endl;

    return 0;
}
