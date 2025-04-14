/*Encapsulation**/
#include <iostream>
using namespace std;
class Employee
{
    private:
    string name;
    int id;
    double salary;
    public:
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return name;
    }
    void setId(int id)///222
    {
        this->id=id;
    }
    int getid()
    {
        return id;
    }
    void setSalary(double salary)
    {
        this->salary=salary;//22222
    }
    int getSalary()
    {
        return salary;
    }
    
    
    // void data(string name,int b,double c)
    // {
    //     name=a;
    //     empid=b;
    //     salary=c;
    // }
    // void info()
    // {
    //     cout<<"Name="<<name<<endl;
    //     cout<<"Id"<<empid<<endl;
    //     cout<<"Salary="<<salary<<endl;
    // }
};

int main()
{
    Employee obj;
    obj.setName("sanika");
    obj.setId(222);
    obj.setSalary(222222);
    cout<<"Name="<<obj.getName()<<endl;//name from class Employee
    cout<<"Id="<<obj.getid()<<endl;
    cout<<"salary="<<obj.getSalary();
    
    // Employee obj;
    // obj.data("Rajesh",102,20000);
    // obj.info();
   

    return 0;
}
