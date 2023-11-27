#include <iostream>

using namespace std;

class Project_Res{
private:
    //string pro1,pro2,pro3;
    string pro1 = "pass";
    string pro2 = "fail";
    string pro3 = "pass";


    friend class faculty;
};

class faculty{
public:
    void getResult(const Project_Res &t)
    {
        cout << "The value of Private Variable pro1 = "
             << t.pro1 << endl;
        cout << "The value of Protected Variable pro2 = "
             << t.pro2<< endl;
        cout << "The value of Private Variable pro3 = "
             << t.pro3 << endl;
    }
};

int main()
{
    Project_Res pres;
    faculty fc;
    fc.getResult(pres);

    return 0;
}
