#include<iostream>
using namespace std;
 
//base class
class MyClass {
    public:
    void MyFunction(){
        cout << "This is the content of the parent class" << endl;
    }
    
};
//Another base class
class MySecondClass{
    public:
    void MyMethod(){
        cout << "This is the content of the another parent class." <<endl;
    }
};

//derived class
 class Mychild : public MyClass{
    
 };

//derived class
 class MyGrandchild :public Mychild{

 };
//derived class
 class MyGrandGrandChild :public MyGrandchild{

 };
 class Myancestor:public MyGrandGrandChild , public MySecondClass{

 };

 int main(){
    MyGrandGrandChild Akshay;
    Akshay.MyFunction();
    Myancestor Gods;
    Gods.MyMethod();
    Gods.MyFunction();
 }