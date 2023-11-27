#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    cout<<"The initial String is : ";
    cout<<str<<endl;

    //str[1] =='D';

    str.push_back('h');//only char
    cout << "The String after push back operation is : ";
    cout<<str<<endl;

    str.append(" Gowda");
    cout << "The String after append operation is : ";
    cout<<str<<endl;

    string s1("run");
    str.insert(4,s1);
    cout << "The String after insert operation is : ";
    cout<<str<<endl;

    str.erase(4,3); //erase(starting position,number of position to replace)
    cout << "The String after erase operation is : ";
    cout<<str<<endl;


    str.replace(4,2,s1); //replace(starting position,number position to replace, string)
    cout << "The String after replace operation is : ";
    cout<<str<<endl;

    ////////////////////////////////
    int x = str.compare("Nishanth");
    if(x==0)
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;

    cout<<"size "<<str.size()<<endl;
    cout<<"length "<<str.length()<<endl;
    cout<<"capacity "<<str.capacity()<<endl;
    cout<<"max size "<<str.max_size()<<endl;
    str.resize(100);
    cout<<"size after resize "<<str.size()<<endl;
    cout<<"empty "<<(s1.empty()?"yes":"no")<<endl;

    string s2("Nishanth");

    str.swap(s2); //swap(init only variable name)
    cout<<str<<endl;

    return 0;
}
