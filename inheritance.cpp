/*inheritance
1.simple inheritance /single inheritance*/
#include <iostream>
using namespace std;
// class Car//parent/superclass/base class
// {
//     protected:
//     string brandName="Hyundai Motor";
//     public:
//     void brandDetails()
//     {
//         cout<<"Brand Name="<<brandName<<endl;
//     }
    
// };
// class Hyundai:public Car
// {
//     public:
//     string modelName="i10";
//     void modelDetails()
//     {
//         cout<<"model name="<<modelName<<endl;
//         cout<<"Brand name="<<brandName<<endl;
    
//     }
// };

// int main()
// {
//     Hyundai h;
//     h.modelDetails();
    

//     return 0;
// }





/*Multilevet inheritance*/


class Car//class A/Grandparect
{
  protected:
  string brandName="Hyundai Motor";
  
  public:
//   void brandDetails()
//   {
//       cout<<"Brand Name="<<brandDetails<<endl;
//   }
};
class Hyundai:public Car//class B/father
{
    public:
    string modelName="i10";
    void modelDetails()
    {
        cout<<"Model Name="<<modelName<<endl;
        cout<<"Brand Name="<<brandName<<endl;
    
    }
};
class EngineType:public Hyundai//class C /son
{
  public: 
  string engine="petrol";
  void engineDetails()
  {
      cout<<"model Name="<<modelName<<endl;
      cout<<"Brand Name="<<brandName<<endl;
      cout<<"Engine Name="<<engine<<endl;
  }
};
int main()
{
    EngineType e;
    e.engineDetails();
    // Car c;
    // c.brandDetails();
    // Hyundai h;
    // h.modelDetails();
    
    return 0;
}





/*Hierarchical inheritance*/
/*

class Car
{
  protected:
  string brandName="These are car models";
  public:
  void brandDetails()
  {
      cout<<"Brand Name="<<brandName<<endl;
  }
};
class Hyundai:public Car
{
 public:
 string modelName="i10";
 void modelDetails()
 {
     cout<<"Model Name="<<modelName<<endl;
     cout<<"Brand Name="<<brandName<<endl;
 }
};
class Tata:public Car 
{
    public:
    string modelName="Nexa";
    void modelDetails()
    {
        cout<<"Model Name="<<modelName<<endl;
        cout<<"Brand Name="<<brandName<<endl;
    }
};
int main()
{
    Hyundai h;
    h.modelDetails();
    Tata t;
    t.modelDetails();
    return 0;
}*/

    

