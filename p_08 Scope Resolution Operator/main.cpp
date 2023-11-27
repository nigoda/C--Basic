#include <iostream>
using namespace std;

class person {
    public:
    string myname;
    int mynum;

void getdata();


void display();


};
void person::getdata()
{
    cin>>mynum;
    cin>>myname;
}
void person::display()
{

    cout<<mynum<<endl;
    cout<<myname<<endl;

}

int main()
{
person p1;
   p1.getdata();
   p1.display();

   return(0);
}
