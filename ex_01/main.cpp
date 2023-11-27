#include <iostream>

using namespace std;

int main()
{
    int A=0,B=0,C=0,D=0;
    while(1)
    {
        string sec;

        cout<<"Enter the Section : ";
        getline(cin,sec);
        if(!sec.compare("exit"))
        {
         cout<<"A :"<<A<<endl;
         cout<<"B :"<<B<<endl;
         cout<<"C :"<<C<<endl;
         cout<<"D :"<<D<<endl;
         break;
        }
        else
        {
          if(!sec.compare("A"))
            {A++;}
          else if(!sec.compare("B"))
            {B++;}
          else if(!sec.compare("C"))
            {C++;}
          else if(!sec.compare("D"))
            {D++;}

         cout<<"A :"<<A<<endl;
         cout<<"B :"<<B<<endl;
         cout<<"C :"<<C<<endl;
         cout<<"D :"<<D<<endl;
        }


    }
    return 0;
}
