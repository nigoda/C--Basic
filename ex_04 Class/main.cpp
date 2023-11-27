#include <iostream>

using namespace std;


class Table{
    public:
    string material;
    int num_legs;
    string type;


    public:
    void getUsage(string typ){
        if(typ=="reading"){
            material = "A";
            num_legs = 4;
            type = typ;
        }
        else if(typ=="dining"){
            material = "B";
            num_legs = 3;
            type = typ;
        }
        else if(typ=="computer"){
            material = "C";
            num_legs = 8;
            type = typ;
        }
    }
};

int main()
{
    Table table1;
    string input;
    cin>>input;
    table1.getUsage(input);
    cout << "material :"<< table1.material << endl;
    cout << "num_legs :"<< table1.num_legs << endl;
    cout << "type :"<< table1.type << endl;
    return 0;
}
