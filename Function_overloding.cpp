/*function overloading*/
#include <iostream>
using namespace std;
class Addition
{
    public:
    void add()
    {
        cout<<"Addition="<<5+6<<endl;
    }
    void add(int num1,int num2)
    {
        cout<<"Addition="<<num1+num2<<endl;
    }
};

int main()
{
    Addition obj;
    obj.add();
    obj.add(10,15);

    return 0;
}
