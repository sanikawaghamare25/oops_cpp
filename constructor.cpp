/*contsructor*/
#include <iostream>
using namespace std;
class Student
{
    private:
    string name;
    int id;
    string dept;
    
    public:
    Student()//contsructor
    {
        cout<<"This is Student"<<endl;
    
    }
    
    Student(string a,int id,string dept)
    {
        this->name=name;
        this->id=id;
        this->dept=dept;
    }
    void infoDisplay()
    {
        cout<<"Name="<<name<<endl;
        cout<<"id="<<id<<endl;
        cout<<"Dept="<<dept<<endl;
    }
};

int main()
{
    Student obj;
    Student obj1("Rajesh",203,"EXTC");
    obj1.infoDisplay();

    return 0;
}
