#include<iostream>
using namespace std;
 
 class vehicle{
    public:
    string brand ="Ford";
    void honk(){
        cout << "POO POO" << endl;
    }
 };
  class car:public vehicle{
   public:
    string model = "Mustang";
    void carname(){
         cout << "The car name is " << brand << " " << model << endl;
    }
 
  };
int main(){
   car myCar ;
   myCar.honk();
   myCar.carname();

return 0;
}

